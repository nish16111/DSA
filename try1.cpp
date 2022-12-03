#include<iostream>
using namespace std;

class Node
{
    public:  
    Node* next;
    Node* prev;
    int data;
    Node()
    {
        next = NULL;
        prev = NULL;
        data = 0;
    }
    Node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

class doublyLL
{
    public:
    Node*  Head;
    doublyLL()
    {
        Head = NULL;
    }
    void append(Node* n)
    {
        Node* temp = Head;
        if (Head == NULL)
        {
            Head = n;
        }
        
        else
        {
            while (temp->next!= NULL)
        {
            temp = temp->next;
        }
            temp->next = n;
            n->prev = temp;
        }
        
    }
    void prepend(Node* n)
    {
        Node* temp = Head;
        n->next = Head;
        Head->prev = n;
        Head = n;

    }

    void deleteLast()
    {
        Node* temp = Head;
        while (temp->next!= NULL)
        {
            temp = temp->next;       
        }
        temp->prev->next = NULL;
        
    }

    void deleteAfter(Node* n)
    {
        Node* temp = Head;
        Node* mid_node = n->next;
        Node* next_node = mid_node->next;
        while (temp->data != n->data)
        {
            temp = temp->next;
        }
        n->next = next_node;
        next_node->prev = n;
    }

    void print()
    {
        Node* temp = Head;
        while (temp!= NULL)
        {
            cout<<temp->data<<" <-> ";
            temp = temp->next;
        }
        cout<<" NULL ";
    }
};

int main(){
    Node n1(10);
    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node n5(0);
    doublyLL d;
    d.append(&n1);
    d.append(&n2);
    d.append(&n3);
    d.append(&n4);
    d.prepend(&n5);
    d.deleteLast();
    d.deleteAfter(&n1);
    d.print();
    return 0;
}