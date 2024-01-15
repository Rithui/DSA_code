#include<iostream>
using namespace std;
struct Node{
  int data;
  Node *next;
  Node(int x)
  {
      data=x;
      next=NULL;
  }
};
void printlist(Node *head)
{
    while(head!=NULL)
    {
        cout<<(head->data)<<" ";
        head=head->next;
    }
}
Node *reverse(Node *head)
{
    Node *curr=head;
    Node *prev=NULL;
    Node *next=curr->next;
    while(curr->next!=NULL)
    {
        curr=curr->next;

    }
}
int main();
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    printlist(head);
    cout<<"\n";
    reverse(head);
    printlist(head);
}
