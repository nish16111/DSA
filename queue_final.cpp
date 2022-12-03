#include<iostream>
using namespace std;

int arr[1000];
int rear = -1; int front = -1;
int n = 5;

void enqueue(int val)
{
    if (rear == n-1)
    {
        cout<<"Queue full"<<endl;
    }
    else
    {
        if (front==-1 && rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        arr[rear] = val;
    }
    
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout<<"Queue is empty ";

    }
    else
    {
        if (front == rear)
        {
            front--;
            rear--;
        }
        else
        {
            front++;
        }
        
    }
    
}

void print()
{
    for (int i = front; i <= rear; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    print();
    return 0;
}