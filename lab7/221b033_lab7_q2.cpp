#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
public:
      int value;
      Node* next;
      };

int main()
{
    Node* head;
    Node* one=nullptr;
    Node* two=nullptr;
    Node* three=nullptr;
    Node* newnode=nullptr;

    one=new Node();
    two=new Node();
    three=new Node();
    newnode=new Node();

    one->value=1;
    two->value=2;
    three->value=3;

    int n;
    cout<<"The choices are:\n1.For inserting at the beginning \n2.For inserting at the end\n3.For inserting at the given position\n4.For printing the linked list";
    cout<<"Enter your choice:";
    cin>>n;

    switch(n):
    case 1:
        struct node *newNode;
        newNode = new struct node;
        cout<<"Enter the element to be inserted at the beginning:"
        cin>>newNode->data;
        newNode->next = head;
        head = newNode;

    case 2:
        struct node* newNode;
        newNode = new struct node;
        cout<<"Enter the element to be inserted into the end:";
        cin>>newNode->value;
        newNode->next = nullptr;
        struct node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;


    case 3:
        int position;
        cout<<"Enter the postion at which the element should be inserted";
        cin>>position;
        Node* newNode = new Node;
        cout<<"Enter the element to be inserted at the given position:";
        cin>>newNode->value;
        Node* temp = head;
        for (int i = 2; i < position; i++) {
             if (temp->next != nullptr) {
                 temp = temp->next;
            }
       }
       newNode->next = temp->next;
       temp->next = newNode;

    case 4:
         head=one;
         while(head!=Null){
            cout<<head->value;
            head=head->next;
         }

    return 0;
}
