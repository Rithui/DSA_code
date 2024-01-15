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
    while (head!=NULL)
    {
        cout<<(head->data)<<" ";
        head=head->next;
    }
    
}
Node *insertend(Node *head,int x)
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
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->prev=curr;
        temp->next=NULL;
        return head;
    }
}
int main()
{
   Node *head=new Node(10);
   Node *temp1=new Node(20);
   Node *temp2=new Node(30);
   head->next=temp1;
   temp1->next=temp2;
   temp1->prev=head;
   temp2->next=NULL;
   temp2->prev=temp1;
   printlist(head);
   cout<<"\n";
   head=insertend(head,50);
   printlist(head);
}