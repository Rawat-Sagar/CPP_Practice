// Doubly Linked list
#include <bits/stdc++.h>
using namespace std;

class Node { 
public: 
    Node* prev;
    int data; 
    Node* next; 
};

// Insert the Node
void addToEmpty(Node* &head,int data)
{
    Node* temp = new Node();
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
}


// Insert the Node at begin of linked list
void addToBegin(Node* &head,int data)
{
    Node* temp = new Node();
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
}


// Insert the Node at end of linked list
void addToEnd(Node* &head,int data)
{
    Node* tp; //Pointer to head node
    Node* temp = new Node();
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    tp = head;
    while(tp->next != NULL)
    {
        tp = tp->next;
    }
    tp->next = temp;
    temp->prev = tp;
}


// Print function
void printList(Node* node) 
{
    if(node == NULL)
    {
        cout<<"Doubly linked is Empty";
    }
    
    
    while (node != NULL) 
    { 
        cout<<" "<<node->data<<" "; 
        node = node->next; 
    } 
 
    
} 

int main()
{
    Node* head = NULL;
    printList(head);
    addToEmpty(head,8);
    cout<<endl;
    cout<<"After the Insertion of Node in Doubly Linked List :"<<endl;
    printList(head);
    
    addToBegin(head,10);
    cout<<endl;
    cout<<"After the Insertion of Node at Begin of linked list :"<<endl;
    printList(head);
    
    addToEnd(head,20);
    cout<<endl;
    cout<<"After the Insertion of Node at End of linked list :"<<endl;
    printList(head);
    
    
    
    

    return 0;
}


// Doubly linked is Empty
// After the Insertion of Node in Doubly Linked List :
//  8 
// After the Insertion of Node at Begin of linked list :
//  10  8 
// After the Insertion of Node at End of linked list :
//  10  8  20 

