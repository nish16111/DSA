#include <iostream>
using namespace std;

class Node  
{
    public:
    int data;
    Node* next;
};

void print(Node *n)
{
    while (n!= nullptr)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
    
}
// (**)liya h idhar hamne kyuki mujhe ek ptr chahiye jo head ko pt i.E. (href)
void push_front(Node** href, int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = *href;
    *href = new_node;
}

void insertAfter(Node* prev_node, int data)
{
    if (prev_node == NULL)
    {
        cout<<"The prev node can't be null "<<endl;
    }
    
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next=prev_node->next;
    prev_node->next = new_node;
}

void append(Node** href, int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    if (*href == NULL)
    {
        new_node = *href;
        return;
    }

    else  
    {
        Node* last = *href;
        while (last->next!=NULL)
        {
            last = last->next;
        }
        last->next = new_node;
        
    }
    
}
void deleteNode(Node** href, int key)
{
    Node* temp = *href;
    Node* prev = NULL;
    
    if (temp!=NULL && temp->data == key)
    {
        *href = temp->next;
        delete temp;
        return;
    }
    while (temp!= NULL && temp->data!= key)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Error";
    }
    else
    {
        prev->next = temp->next;
        delete temp;
    }
    
}

int main()
{
//created ptrs to pt. to null initially
    Node* Head = nullptr;
    Node* Second = nullptr;
    Node* Third = nullptr;
//dynamic allocation of memory
    Head = new Node();
    Second  = new Node();
    Third = new Node();
//liniking nodes with each other
    Head->next = Second;
    Second->next = Third;
    Third->next = nullptr;
//setting data in the nodes
    Head->data = 1;
    Second->data = 2;
    Third->data = 3;    
    append(&Head, 90);
    insertAfter(Second, 89);
    deleteNode(&Head, 3);
    print(Head);
}