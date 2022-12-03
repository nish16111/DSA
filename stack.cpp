#include<iostream>
using namespace std;


class stack
{
    public:  
    int top = -1;
    int arr[1000];
    int n = 5;
    void push(int val)
    {
        if (top == n-1)
        {
            cout<<"Stack overflow ";
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout<<" Underflow ";
        }
        
        arr[top] = 0;
        top--;
    }

    void display()
    {
        cout<<"The top element is : "<<arr[top];
    }
};


int main(){
    stack s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(9);
    
    
    
    
    return 0;
}