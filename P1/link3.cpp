#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node *insertend(Node *head,int x)
{
   Node *temp=new Node(x);
   if(head==NULL)
   {
    return NULL;
   }
   Node *curr=head;
   while (curr->next!=NULL)
   {
    curr=curr->next;
   }
   curr->next=temp;
   return head;
}
void printlist(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;

    }
}
int main()
{
   Node *head=new Node(10);
   head->next=new Node(20);
   head->next->next=new Node(30);
   head->next->next->next=new Node(40);
   head=insertend(head,25);
   printlist(head);
}