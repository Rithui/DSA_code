#include <iostream>
using namespace std;

// Linked List Node
struct Node {
    int data;
    struct Node* next;
};

/* Function to insert a node at the beginning */
void push(struct Node** head_ref, int new_data)
{
    Node* new_node = new Node;

    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to print the second list according
// to the positions referred by the 1st list
void printSecondList(Node* l1, Node* l2)
{
    struct Node* temp = l1;
    struct Node* temp1 = l2;

    // While first linked list is not null.
    while (temp != NULL) {
        int i = 1;

        // While second linked list is not equal
        // to the data in the node of the
        // first linked list.
        while (i < temp->data) {
            // Keep incrementing second list
            temp1 = temp1->next;
            i++;
        }

        // Print the node at position in second list
        // pointed by current element of first list
        cout << temp1->data << " ";

        // Increment first linked list
        temp = temp->next;

        // Set temp1 to the start of the
        // second linked list
        temp1 = l2;
    }
}

// Driver Code
int main()
{
    struct Node *l1 = NULL, *l2 = NULL;

    // Creating 1st list
    // 2 -> 5
    push(&l1, 5);
    push(&l1, 2);

    // Creating 2nd list
    // 4 -> 5 -> 6 -> 7 -> 8
    push(&l2, 8);
    push(&l2, 7);
    push(&l2, 6);
    push(&l2, 5);
    push(&l2, 4);

    printSecondList(l1, l2);

    return 0;
}
