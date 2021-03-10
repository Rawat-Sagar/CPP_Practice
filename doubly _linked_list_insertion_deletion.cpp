
#include <bits/stdc++.h>
using namespace std;

class Node{
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

// Add before Position Function
void addBeforePos(Node* &head,int data,int pos)
{
    Node* newNode = new Node();
    newNode->data  = data;
    Node* temp = head;
    Node* temp2 = NULL;
    while(pos > 2)
    {
        temp = temp->next;
        pos--;
        
    }
    
    if(pos ==  1)
    {
        addToBegin(head,data);
    }
    else
    {
       temp2 = temp->next;
       temp->next = newNode;
       temp2->prev = newNode;
       newNode->next = temp2;
       newNode->prev = temp; 
    }
}


// Add after Position Function
void addAfterPos(Node* &head,int data,int pos)
{
    Node* newNode = new Node();
    newNode->data  = data;
    Node* temp = head;
    Node* temp2 = NULL;
    if(pos > 1)
    {
       while(pos != 1)
    {
        temp = temp->next;
        pos--;
    } 
    }
    
    if(temp->next == NULL)
    {
        temp->next = newNode;
        newNode->prev = temp;
    }
    else if(pos == 1)
    {
       temp2 = temp->next;
       temp->next = newNode;
       temp2->prev = newNode;
       newNode->next = temp2;
       newNode->prev = temp; 
    }
}

// Deleting the First Node
void delFirstNode(Node* &head)
{
    // take the head to second node and delete the node by using prev ;)
    head = head->next;
    delete head->prev;
    head->prev = NULL;
}


// Deleting the Last Node 
void delLastNode(Node* &head)
{
    Node* temp = head;
    Node* temp2 ;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp2 = temp->prev;
    temp2->next = NULL;
    delete temp;
    temp = NULL;
}

// Deleting the intermediate Node
void delInterNode(Node* &head,int pos)
{
    Node* temp = head;
    Node* temp2;
    while(pos>1)
    {
        temp = temp->next;
        pos--;
    }
    temp2 = temp->prev;
    temp2->next = temp->next;
    temp->next->prev = temp2;
    delete temp;
    temp = NULL;
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
    addToEmpty(head,10);
    cout<<endl;
    cout<<"After the Insertion of Node in Doubly Linked List :"<<endl;
    printList(head);
    
    
     
    addToEnd(head,20);
    cout<<endl;
    cout<<"After the Insertion of Node at End of linked list :"<<endl;
    printList(head);
    
    addToEnd(head,30);
    cout<<endl;
    cout<<"After the Insertion of Node at End of linked list :"<<endl;
    printList(head);
    
    addToEnd(head,40);
    cout<<endl;
    cout<<"After the Insertion of Node at End of linked list :"<<endl;
    printList(head);
    
    addToEnd(head,50);
    cout<<endl;
    cout<<"After the Insertion of Node at End of linked list :"<<endl;
    printList(head);
    
    int pos = 1;
    addAfterPos(head,11,pos);
    cout<<endl;
    cout<<"Insertion of Node ,  After specific position of linked list :"<<pos<<endl;
    printList(head);
    
    
    int poss = 6;
    addAfterPos(head,111,poss);
    cout<<endl;
    cout<<"Insertion of Node ,  After specific position of linked list :"<<poss<<endl;
    printList(head);
    
    
    int p = 2;
    addBeforePos(head,22,p);
    cout<<endl;
    cout<<"Insertion of Node ,  Before specific position of linked list :"<<p<<endl;
    printList(head);
    
    int pp = 1;
    addBeforePos(head,33,pp);
    cout<<endl;
    cout<<"Insertion of Node ,  Before specific position of linked list :"<<pp<<endl;
    printList(head);
    
    int ppp = 9;
    addBeforePos(head,44,ppp);
    cout<<endl;
    cout<<"Insertion of Node ,  Before specific position of linked list :"<<ppp<<endl;
    printList(head);
    
    delFirstNode(head);
    cout<<endl;
    cout<<"After deleteion of first Node in linked list :"<<endl;
    printList(head);
    
    delLastNode(head);
    cout<<endl;
    cout<<"After deleteion of last Node in linked list :"<<endl;
    printList(head);
    
    
    int pst = 4;
    delInterNode(head,pst);
    cout<<endl;
    cout<<"After deleteion of Intermediate Node in linked list :"<<pst<<endl;
    printList(head);
    
    return 0;
}


// Doubly linked is Empty
// After the Insertion of Node in Doubly Linked List :
//  10 
// After the Insertion of Node at End of linked list :
//  10  20 
// After the Insertion of Node at End of linked list :
//  10  20  30 
// After the Insertion of Node at End of linked list :
//  10  20  30  40 
// After the Insertion of Node at End of linked list :
//  10  20  30  40  50 
// Insertion of Node ,  After specific position of linked list :1
//  10  11  20  30  40  50 
// Insertion of Node ,  After specific position of linked list :6
//  10  11  20  30  40  50  111 
// Insertion of Node ,  Before specific position of linked list :2
//  10  22  11  20  30  40  50  111 
// Insertion of Node ,  Before specific position of linked list :1
//  33  10  22  11  20  30  40  50  111 
// Insertion of Node ,  Before specific position of linked list :9
//  33  10  22  11  20  30  40  50  44  111 
// After deleteion of first Node in linked list :
//  10  22  11  20  30  40  50  44  111 
// After deleteion of last Node in linked list :
//  10  22  11  20  30  40  50  44 
// After deleteion of Intermediate Node in linked list :4
//  10  22  11  30  40  50  44 

