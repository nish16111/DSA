#include<iostream>
#include <string>

using namespace std;

class Queue
{
    public:  
    int arr[5], front = -1, rear = -1;

    Queue()
    {
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
        
    }

    bool isEmpty()
    {
        if (rear == -1 && front == -1)
        {
            cout<<"The queue is empty "<<endl;
            return true;
        }
        else
        {
            return false;
        }
        
    }

    bool isFull()
    {
        if (arr[rear] == 4)
        {
            cout<<"The queue is full "<<endl;
            return true;
        }
        else
        {
            return false;
        }
        
    }

    void enqueue(int val)
    {
        // if (isFull())
        // {
        //     cout<<"Queue Overflow "<<endl;
        // }
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            
        }
        else
        {
            rear ++;
        }
        arr[rear] = val;
        
        
    }

    void dequeue()
    {
        int temp;
        // if (isEmpty())
        // {
        //     cout<<"Queue Underflow "<<endl;
        // }

        if (front == rear)
        {
            temp = arr[front];
            arr[front] = 0;
            front --;
            rear --;
        }
        else
        {
            temp = arr[front];
            arr[front] = 0;
        }
        
        
    }

    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout<<arr[i]<<endl;
        }
        cout<<endl;
    }

};

int main(){

    Queue q;
    q.enqueue(5);
    q.display();
    q.dequeue();

    
    q.display();

    return 0;
}