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
void printlist(Node *head)
{
    while (head!=NULL)
    {
        cout<<(head->data)<<" ";
        head->next;
    }
    
}
Node *delpos(Node *head,int pos)
{
    Node *temp=head;
    if(head==NULL)
    return NULL;
   if(pos==1)
   {
     temp->next=head;
     delete head;
     return temp;
   }
   for(int i=1;i<=pos-1 && temp!=NULL;i++)
   {
     temp=temp->next;
   }
  while(curr)
   temp->next=curr->next;
     
}
int main()
{
  Node *head=new Node(10);
  head->next=new Node(20);
  head->next->next=new Node(30);
  head->next->next->next=new Node(40);
  head=delpos(head,3);
  printlist(head);
}