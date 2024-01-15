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
Node *insertend(Node *head,int x)
{
    Node*curr=head;
    Node *temp=new Node(x);
    if(curr==NULL)
    {
        return temp;
    }
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=NULL;
    return head;
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    printlist(head);
    cout<<"\n";
    insertend(head,60);
    printlist(head);
}
