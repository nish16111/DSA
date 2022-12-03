#include<iostream>
using namespace std;

class Node
{
    public:  
    int data;
    Node* next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};  

class stack_LL
{
    public:  
    stack_LL()
    {
        top = NULL;
    }
    Node* top;
    void push(Node* n)
    {
        if (top == NULL)
        {
            top = n;
        }

        else
        {
            n->next = top;
            top = n;
        }
        
    }
    void pop()
    {
        top = top->next;
    }
    void print()
    {
        if (top == NULL)
        {
            cout<<"Stack Underflow ";
        }
        
        Node* ptr = top;
        while (ptr!= NULL)
        {
            cout<<ptr->data<<endl;
            ptr = ptr->next;
        }
        cout<<endl;
        
    }
};

int main(){
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    stack_LL s;
    s.push(&n1);
    s.push(&n2);
    s.push(&n3);
    s.push(&n4);
    s.push(&n5);
    s.pop();
    s.pop();
    s.print();

    return 0;
}