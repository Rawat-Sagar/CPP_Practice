// A simple C++ program for traversal of a linked list 
#include <bits/stdc++.h> 
using namespace std; 
  
class Node { 
public: 
    int data; 
    Node* next; 
}; 
  
// This function prints contents of linked list 
// starting from the given node 
void printList(Node* n) 
{ 
    while (n != NULL) { 
        cout << n->data<<" "; 
        n = n->next; 
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
  
    printList(head); 
  
    return 0; 
} 


Output:
1 2 3 4 
