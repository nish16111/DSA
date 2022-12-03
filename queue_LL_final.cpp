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

class queueLL
{
    public: 
    Node* front;
    Node* rear; 
    queueLL()
    {
        front = NULL;
        rear = NULL;
    }
    void enqueue(Node* n)
    {
        if (front == NULL && rear == NULL)
        {
            front = n;
            rear = n;
        }
        else if (rear == NULL)
        {
            rear = n;
        }
        else
        {
            rear ->next = n;
            rear = n;
        }
        
    }

    void dequeue()
    {
        front = front->next;
    }

    void print()
    {
        Node* ptr = front;
        while (ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        
    }

};
    
int main(){
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    queueLL q;
    q.enqueue(&n1);
    q.enqueue(&n2);
    q.enqueue(&n3);
    q.enqueue(&n4);
    q.enqueue(&n5);
    q.dequeue();
    q.dequeue();
    q.print();
    return 0;
}