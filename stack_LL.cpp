#include <iostream>

using namespace std;

class Node{
   public:
   int data;
   Node *next;
   Node(){
       data=0;
       next=NULL;
   }
   Node(int d){
       data=d;
       next=NULL;
   }
};

class Stack_LL{
    public:
    Node *top;
    Stack_LL(){
        top=NULL;
    }
    void push(Node *n){
        
        if(top==NULL){
            top=n;
            cout<<n->data<<" pushed on stack"<<endl;
        }
        else{
            n->next=top;
            top=n;
            cout<<n->data<<" pushed on stack"<<endl;
        }
    }
    
    void pop(){
        cout<<"poping "<<top->data<<endl;
        top=top->next;
    }
    void display(){
        if(top==NULL){
            cout<<"stack underflow";
        }
        Node *ptr=top;
        cout<<"The stack contains: "<<endl;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }
    }
};

int main()
{ 
    Node n1(3);
    Node n2(5);
    Node n3(6);
    Node n4(7);
    Node n5(13);
    
    Stack_LL s1;
    s1.push(&n1);
    s1.push(&n2);
    s1.push(&n5);
    s1.push(&n4);
    s1.push(&n3);
    s1.display();
    s1.pop();
    s1.pop();
    s1.display();

    return 0;
}