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

class queue_LL{
    public:
    Node *front;
    Node *rear;
    queue_LL(){
        front=NULL;
        rear=NULL;
    }
    void enqueue(Node *n){
        if(front==NULL && rear==NULL){
            front=n;
            rear=n;
        }
        else if(rear==NULL){
            rear=n;
        }
        else{
            rear->next=n;
            rear=n;
        }
        cout<<n->data<<" enqueued"<<endl;
    }
    void dequeue(){
        if(front==NULL){
            cout<<"queue underflow"<<endl;
        }
        else{
            cout<<front->data<<" dequeued"<<endl;
            front=front->next;
        }
    }
    void display(){
        Node *ptr=front;
        cout<<"Queue contains: "<<endl;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
};
int main()
{
  Node n1(5);
  Node n2(10);
  Node n3(15);
  Node n4(20);
  Node n5(25);
  
  queue_LL q1;
  q1.enqueue(&n1);
  q1.enqueue(&n2);
  q1.enqueue(&n3);
  q1.enqueue(&n4);
  q1.enqueue(&n5);
  q1.display();
  q1.dequeue();
  q1.dequeue();
  q1.display();
     
    return 0;
}