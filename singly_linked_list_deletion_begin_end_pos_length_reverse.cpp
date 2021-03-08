// A simple C++ program for traversal of a linked list 
#include <bits/stdc++.h> 
using namespace std; 
  
class Node { 
public: 
    int data; 
    Node* next; 
};
 

void append(Node* &head_ref, int new_data)   
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
    Node* last = head_ref;  
    
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

// Time Complexity :O(1)
// Array :O(n)
// Deleting Node at Beginning of linked list
void delAtBeg(Node* &head)
{
    if(head == NULL)
    {
        cout<<"List is already empty"<<endl;
    }
    else{
        Node* temp = head;
        head = head->next;
        delete temp;
        
    }
}

// Time Complexity :O(n)
// Array : O(1)
// Deleting Node at End of Linked list(Two Pointer Approach)
void delAtLast(Node* &head)
{
    if(head == NULL)
    {
        cout<<"Linked List is Empty!"<<endl;
    }
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else{
        Node* temp = head;
        Node* temp2 = head;
        
        while(temp->next != NULL)
        {
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = NULL;
        delete temp;
        temp = NULL;
    }
}


// Deleting Node at End of Linked list(One Pointer Approach)
void delAtLastOPA(Node* &head)
{
    if(head == NULL)
    {
        cout<<"Linked List is Empty!"<<endl;
    }
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else{
        Node* temp = head;
        
        
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        
    }
}


// Delete Node At Specific Position
void delAtPos(Node* &head,int pos)
{
    Node* curr = head;
    Node* prev = head;
    if(head == NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    else if(pos == 1)
    {
        head = curr->next;
        delete curr;
        curr = NULL;
    }
    else {
        while(pos != 1)
        {
            prev = curr;
            curr = curr->next;
            pos--;
        }
        prev->next = curr->next;
        delete curr;
        curr = NULL;
    }
}

// Function to Delete all the nodes in  linked list
void delAllNode(Node* &head)
{
    if(head == NULL)
    {
        cout<<"Linked List is Empty"<<endl;
    }
    else
    {
        Node* temp = head;
        while(temp != NULL)
        {
            temp = temp->next;
            delete head;
            head = temp;
        }
    }
}


// Function to reverse the Linked list
void reverse(Node* &head)
{
    // prev = previous to head Pointer
    //  next = next to head Pointer
    Node* prev = NULL;
    Node* nxt = NULL;
    // Assure traversal and reverse of linked list
    while(head != NULL)
    {
        nxt = head->next;
        head->next = prev;
        prev = head;
        head = nxt;
    }
    head = prev;
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
    head = NULL;
    cout<<"Before Insertion :- linked list"<<endl;
    printList(head); 
    append(head, 6);
    append(head, 16); 
    append(head, 26); 
    append(head, 56);
    append(head, 66);
    append(head, 76);
    cout<<endl;
    cout<<"After Insertion :- linked list"<<endl;
    printList(head);
    
    // To count Node or length of linked list
    Node* ref = head;
    int count = 0;
    while(ref != NULL)
    {
        count +=1;
        ref = ref->next;
    }
    cout<<endl<<"Length or Nodes in linked list :"<<count<<endl;
    
    reverse(head);
    cout<<"After Linked List is reversed :";
    printList(head);
    
    delAtBeg(head);
    cout<<endl;
    cout<<"After Deletion at the Begin of linked list"<<endl;
    printList(head);
    
    delAtLast(head);
    cout<<endl;
    cout<<"After Deletion at the End of linked list"<<endl;
    printList(head);
    
    delAtLastOPA(head);
    cout<<endl;
    cout<<"After Deletion at the End of linked list using One Pointer Approach"<<endl;
    printList(head);
    
    int pos = 3;
    delAtPos(head,pos);
    cout<<endl;
    cout<<"After Deletion at the Specific Position of linked list :"<<pos<<endl;
    printList(head);
    
    delAllNode(head);
    cout<<endl;
    cout<<"After deletion of linked list"<<endl;
    printList(head);
  
    return 0; 
} 



// Before Insertion :- linked list

// After Insertion :- linked list
// 6 16 26 56 66 76 
// Length or Nodes in linked list :6
// After Linked List is reversed :76 66 56 26 16 6 
// After Deletion at the Begin of linked list
// 66 56 26 16 6 
// After Deletion at the End of linked list
// 66 56 26 16 
// After Deletion at the End of linked list using One Pointer Approach
// 66 56 26 
// After Deletion at the Specific Position of linked list :3
// 66 56 
// After deletion of linked list


