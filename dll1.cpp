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
    void append(Node* n)
    {
        if(Head == NULL)
        {
            Head = n;
        }
        else
        {
            Node* ptr = Head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
            n->prev = ptr;
        }
    }

    void prepend(Node* n)
    {
        n->next = Head;
        Head = n;
    }

    void deleteLast()
    {
        Node* ptr = Head; 
        while (ptr->next!= NULL)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
        
    }

    void deleteAfer(Node* n)
    {
        Node* temp = Head;
        Node* mid_node = n->next;
        Node* next_node = mid_node->next;
        while (temp->data != n->data)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout<<"The node after does not exist ";
        }
        else
        {
            n->next = next_node;
            next_node->prev = n;
        }
        

    }

    void print()
    {
        Node* ptr = Head;
        while (ptr!= NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        
    }
};

int main()
{
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(9);
    DoublyLL d;
    d.append(&n1);
    d.append(&n2);
    d.append(&n3);
    d.append(&n4);
    d.append(&n5);
    d.deleteAfer(&n4);
    

    d.print();
    return 0;
}