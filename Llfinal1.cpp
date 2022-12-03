#include<iostream>
using namespace std;

class Node 
{
    public:  
    int data;
    Node* next;
};

void print(Node* n)
{
    while (n!= NULL)
    {
        cout<<n->data<< " ";
        n= n->next; 
    }
    
}

void prepend(Node** href, int data)
{
    Node* new_node;
    new_node = new Node();
    new_node->next = *href;
    *href = new_node;
}

void insertAfter(Node* prev, int data)
{
    Node* new_node;
    new_node = new Node();
    new_node->data = data;
    if (prev==NULL)
    {
        cout<<"Prev can't be null ";
    }
    else
    {
        new_node->next = prev->next;  //
        prev->next = new_node;
    }
}

void append(Node** href, int data)
{
    Node* last = *href;
    Node* new_node;
    new_node = new Node();
    new_node->data = data;
    while (last->next!= NULL)
    {
        last = last->next;
    }
    last->next = new_node;  //
    new_node->next = NULL;
}

void deleteNode(Node** href, int key)
{
    Node* temp = *href;
    Node* prev = NULL;
    while (temp!= NULL && temp->data == key)
    {
        *href = temp->next;
        delete temp;
        return;
    }
    while (temp!=NULL && temp->data!= key)
    {
        prev= temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout<<"The node u want to delete does'nt exist ";
    }
    else
    {
        prev->next = temp->next;
        delete temp;
    }

    
    
}

int main(){
    Node* Head = NULL;
    Node* Second = NULL;
    Node* Third = NULL;

    Head = new Node();
    Second = new Node();
    Third = new Node();

    Head->next = Second;
    Second->next = Third;
    Third->next = NULL;

    Head->data = 1;
    Second->data = 2;
    Third->data = 3;
    
    prepend(&Head, 0);
    insertAfter(Second,8);
    append(&Head, 11);
    deleteNode(&Head,2);
    print(Head);
    return 0;
}