#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data=x;
        prev=NULL;
        next=NULL;
    }
};
void printlist(Node *head)
{
    while (head!=NULL)
    {
        cout<<(head->data)<<" ";
        head=head->next;
    }
    
}
Node *insertbeg(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    { 
        temp->prev=NULL;
        temp->next=NULL;
        return temp;
    }
    else{
    temp->next=head;
    head->prev=temp;
    temp->prev=NULL;
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
   temp2->prev=temp1;
   printlist(head);
   cout<<"\n";
   head=insertbeg(head,40);
   printlist(head);
   return 0;
}