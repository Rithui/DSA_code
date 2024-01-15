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
        head=head->next;
    }
    
}
Node *delpos(Node *head,int pos)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(pos==1)
    {
        Node *temp=head->next;
        delete head;
        return temp; 
    }
    Node *prev=head;
    Node *curr=head;
    if(pos==3)
    {
       prev=head->next;
    }
    for(int i=1;i<=pos-1 && curr!=NULL;i++)
    {
        curr=curr->next;
        if(i==pos-3)
        {
            prev=curr->next;
        }
    }
    prev->next=curr->next;
    delete curr;
    return head;
}
int main()
{
   Node *head=new Node(10);
   head->next=new Node(20);
   head->next->next=new Node(30);
   head->next->next->next=new Node(40);
   head->next->next->next->next=new Node(50);
   head->next->next->next->next->next=new Node(60);
   head->next->next->next->next->next->next=new Node(70);
   printlist(head);
   cout<<"\n";
   head=delpos(head,5);
   printlist(head);
}