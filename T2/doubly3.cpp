#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data=x;
        prev=NULL;
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
Node *insertpos(Node *head,int p,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    {
        temp->prev=NULL;
        temp->next=NULL;
        return temp;
    }
    else{
        Node *curr=head;
        for(int i=1;i<=p-2 && curr!=NULL;i++)
        {
            curr=curr->next;
        }
        if(p==2)
        {
            curr=head->next;
        }
        temp->next=curr;
        curr->prev->prev=temp;
        temp->prev=curr->prev;
        curr->prev=temp;
        return temp;
    }
}
int main()
{
  Node *head=new Node(10);
  Node *temp1=new Node(20);
  Node *temp2=new Node(30);
  head->next=temp1;
  temp1->prev=head;
  temp1->next=temp2;
  temp2->next=NULL;
  temp2->prev=temp1;
  printlist(head);
  cout<<"\n";
  head=insertpos(head,2,45);
  printlist(head);
  return 0;
}