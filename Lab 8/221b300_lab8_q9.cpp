#include <iostream>

using namespace std;

// A doubly linked list node
struct Node {
   string data;
   struct Node* next;
   struct Node* prev;
};

//Append node at the front of the list
void append_data(Node** head, string new_data)
{
   //Create a new node and allocate memory.
   struct Node* newNode = new Node;

   //assign data to new node
   newNode->data = new_data;

   // A new node has been added with the name head and the previous node
   // set to null, since it is being added at the front.
   newNode->next = (*head);
   newNode->prev = NULL;

   //previous head is new node
   if ((*head) != NULL)
   (*head)->prev = newNode;

   //head points to new node
   (*head) = newNode;
}

// Following function display contents of the doubly linked list
void displayDlList(Node* head)
{
    Node* last_node;
    cout << "\n\nTraversal in Forward direction:\n";
    while (head != NULL) {
        cout << " " << head->data << " ";
        last_node = head;
        head = head->next;
    }
    cout << "\n\nTraversal in Reverse direction:\n";
    while (last_node != NULL) {
        cout << " " << last_node->data << " ";
        last_node = last_node->prev;
    }
}

//main program
int main() {
   /* Start with the empty list */
   struct Node* head = NULL;
   append_data(&head, "Red");
   append_data(&head, "Green");
   append_data(&head, "White");
   append_data(&head, "Orange");
   cout<<"Doubly linked list is as follows: ";
   displayDlList(head);
   return 0;
}
