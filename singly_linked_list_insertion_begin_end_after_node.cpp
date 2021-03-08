// A simple C++ program for traversal of a linked list 
#include <bits/stdc++.h> 
using namespace std; 
  
class Node { 
public: 
    int data; 
    Node* next; 
};
 
//This function insert in start of linked list

void InsertatBeg(Node*  &head_ref,int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = head_ref;
    head_ref = temp;
}


// Given a node prev_node, insert a  new node after the given  prev_node 

void insertAfter(Node* prev_node,int new_data)
{
  //check if the given previous node is NULL
  if(prev_node == NULL)
  {
      cout<<"The given previous node is Invalid or Null";
      return;
  }
  
  Node* new_node = new Node();
  new_node->data = new_data;
  new_node->next = prev_node->next;
  
  prev_node->next = new_node;
}

// Given a reference (pointer to pointer) to the head   
// of a list and an int, appends a new node at the end  
void append(Node*  &head_ref, int new_data)   
{   
    
    // 1. allocate node  
    Node* new_node = new Node();  
    
    // 2. Put in the data  
    new_node->data = new_data;   
    
    // 3. This new node is going to be   
    // the last node, so make next of   
    // it as NULL 
    new_node->next = NULL; 
    
    // Used in step 5  
    Node *last = head_ref;  
    
    // 4. If the Linked List is empty,  
    // then make the new node as head  
    if (head_ref == NULL)   
    {   
        head_ref = new_node;   
        return;   
    }   
    
    // 5. Else traverse till the last node  
    while (last->next != NULL)   
        last = last->next;   
    
    // 6. Change the next of last node  
    last->next = new_node;   
    return;   
}   



// This function prints contents of linked list 
// starting from the given node 
void printList(Node* head) 
{ 
    while (head != NULL) { 
        cout << head->data<<" "; 
        head = head->next; 
    } 
} 
  
// Driver code 
int main() 
{ 
    
    Node* head = new Node(); 
    Node* second = new Node(); 
    Node* third = new Node(); 
    Node* fourth = new Node();
  
    head->data = 1; 
    head->next = second; 
  
    second->data = 2; 
    second->next = third; 
  
    third->data = 3; 
    third->next = fourth;
    
    fourth->data = 4;
    fourth->next = NULL;
    cout<<"Before Insertion at the front of linked list"<<endl;
    printList(head); 
    
    InsertatBeg(head,10);
    cout<<endl;
    
    cout<<"After Insertion at the front of linked list"<<endl;
    printList(head); 
    
    
    insertAfter(head->next->next->next,20);
    cout<<endl;
    
    cout<<"After Insertion at the given node of linked list"<<endl;
    printList(head);
    
    append(head, 6); 
    cout<<endl;
    
    cout<<"After Insertion at the end of linked list"<<endl;
    printList(head);
  
    return 0; 
} 


// Before Insertion at the front of linked list
// 1 2 3 4 
// After Insertion at the front of linked list
// 10 1 2 3 4 
// After Insertion at the given node of linked list
// 10 1 2 3 20 4 
// After Insertion at the end of linked list
// 10 1 2 3 20 4 6 

