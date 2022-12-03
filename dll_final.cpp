#include<iostream>
using namespace std;

class Node
{
    public:  
    int data;
    Node* next;
    Node* prev;
    Node()
    {
        next = NULL;
        prev = NULL;
    }
    Node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLL
{
    public:  
    Node* Head;
    DoublyLL()
    {
        Head = NULL;
    }
    void prepend(Node* n)
    {
        Node* ptr = Head;
        n->next = Head;
        Head = n;
        ptr->prev = n;
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
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
                temp->next = n;
                n->prev = temp;
        }
        
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
        Node* ptr = Head;
        while (ptr!=NULL)
        {
            cout<<ptr->data<<"<->";
            ptr = ptr->next;
        }
        cout<<"NULL ";
    }
};

int main(){
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    DoublyLL d;
    d.append(&n1);
    d.append(&n2);
    d.append(&n3);
    d.append(&n5);

    d.prepend(&n4);
    d.deleteAfter(&n2);
    d.deleteLast();
    d.print();
    return 0;
}