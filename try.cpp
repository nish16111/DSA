#include<iostream>
using namespace std;

class Node
{
    public:  
    int data;
    Node* next;
};

void print(Node** href)
{
    Node* ptr = *href;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<" <-> ";
        ptr = ptr->next;
    }
    cout<<"NULL";
}

void append(Node** href, int data)
{
    Node* ptr = *href;   
    Node* new_node;
    new_node  = new Node();
    new_node ->data = data;
    if (ptr->next == NULL)
    {
        *href = new_node;
    }
    
    while (ptr->next!= NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    new_node->next = NULL;
}

void prepend(Node** href, int data)
{
    Node* new_node;
    new_node = new Node();
    new_node->data = data;
    new_node->next = *href;
    *href = new_node;
}

void insertAfter(Node* prev, int data)
{
    Node* new_node;
    new_node = new Node();
    new_node ->data = data;
    new_node->next = prev->next;  
    prev->next = new_node;
    
}

void deleteNode(Node** href, int key)
{
    Node* ptr = *href;
    Node* prev = NULL;
    while (ptr!= NULL && ptr->data == key)
    {
        *href = ptr->next;
        delete ptr;
        return;             
    }
    while (ptr!= NULL && ptr->data!= key)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    if (ptr == NULL)
    {
        cout<<"Error ";
    }
    prev->next = ptr->next;
    delete ptr;
}

int main(){
    Node* Head = NULL;
    Node* Second = NULL;
    Node* Third = NULL;

    Head = new Node();
    Second = new Node();
    Third = new Node();

    Head->next  = Second;
    Second->next = Third;
    Third->next = NULL;

    Head->data = 1;
    Second->data = 2;
    Third->data = 3;
    append(&Head, 4);
    prepend(&Head, 0);
    insertAfter(Second, 9);
    deleteNode(&Head, 9);
    print(&Head);

    return 0;
}