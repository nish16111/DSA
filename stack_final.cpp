#include<iostream>
using namespace std;
int arr[100];
int top = -1; int n = 5;

void push(int val)
{
    if (top == n-1)
    {
        cout<<"Stack Oveerflow ";
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
        cout<<"Stack Underflow ";
    }
    else
    {
        top--;
    }
}

void print()
{   
    cout<<"The top element is ";
    cout<<arr[top];
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    print();
    return 0;
}