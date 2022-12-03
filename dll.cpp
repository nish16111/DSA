#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *previous;

    Node(){
        next=NULL;
        previous=NULL;
    }
    Node(int d){
        data=d;
        next=NULL;
        previous=NULL;
        
    }
};

class DoublyLinkedList{
    public:
    Node *head;
    DoublyLinkedList(){
        head=NULL;
    }
    // DoublyLinkedList(Node *n){
    //     head=n;
    // }
    
    void appendNode(Node *n){
        if(head==NULL){
            head=n;
            cout << "Node inserted" <<endl;
        }
        else{
            Node *ptr=head;
            while((ptr->next)!=NULL){
                ptr=ptr->next;
            }
            ptr->next=n;
            n->previous=ptr;
            cout<<"Node inserted"<<endl;
        }
    }
    // inserting at first pos.
    void prependNode(Node *n){
        Node* ptr  = head;
        n->next=head;
        head=n;
        ptr->previous = n;
        cout<<"Prepended"<<endl;
    }
    void deleteNode_last(){   //manan
        Node *ptr=head;
            while((ptr->next)!=NULL){
                ptr=ptr->next;
            }
            ptr->previous->next=NULL;    
            cout<<"deleted Node from last";
    }
    void delete_after(Node *n){
        Node *midNode=n->next;
        Node *nextNode1=midNode->next;
        Node *temp1=head;
            while(temp1->data!=n->data){
                temp1=temp1->next;
            }
            if(temp1->next==NULL){
                cout<<"The node after does not exist "<<endl;
            }
         else{
             
             n->next=nextNode1;
             nextNode1->previous=n;
         }
         cout<<midNode->data<<" deleted"<<endl;
}
    void display(){
        Node *temp=head;
        do{
            cout<<temp->data<<"<->";
            temp=temp->next;
        }
        while(temp!=NULL);
        cout<<"NULL"<<endl;
    }
};
int main()
{
  Node n1(4);
  Node n2(5);
  Node n3(7);
  Node n4(9);
  DoublyLinkedList d1;
  d1.appendNode(&n2);
  d1.appendNode(&n3);
  d1.appendNode(&n1);
  d1.prependNode(&n4);
  
  d1.delete_after(&n2);
  d1.display();
  return 0;
}