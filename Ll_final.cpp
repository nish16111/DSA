#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void print(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

void prepend(Node **href, int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = *href;
    *href = new_node;
}

void insertAfter(Node *prev_node, int data)
{
    if (prev_node == NULL)
    {
        cout << "The prev_node can't be null ";
    }
    Node *new_node;
    new_node = new Node();
    new_node->data = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(Node **href, int data)
{
    Node *new_node;
    new_node = new Node();
    new_node->data = data;
    if (*href == NULL)
    {
        new_node = *href;
    }
    else
    {
        Node *last = *href;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new_node;
    }
}

void deleteNode(Node **href, int key)
{
    Node *temp = *href;
    Node *prev = NULL;
    if (temp != NULL && temp->data == key)
    {
        *href = temp->next;
        delete temp;
        return;
    }
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "Error ";
        }
        else
        {
            prev->next = temp->next;
            delete temp;
        }
    }
}

int main()
{
    Node *Head = NULL;
    Node *Second = NULL;
    Node *Third = NULL;

    Head = new Node();
    Second = new Node();
    Third = new Node();

    Head->data = 1;
    Second->data = 2;
    Third->data = 3;

    Head->next = Second;
    Second->next = Third;
    Third->next = NULL;

    prepend(&Head, 0);
    insertAfter(Second, 4);
    append(&Head, 10);
    deleteNode(&Head, 3);
    print(Head);
    return 0;
}