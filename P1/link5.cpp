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
Node *deltail(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr=head;
    while (curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    delete(curr->next);
    curr->next=NULL;
    return head;
    
}

int main()
{
   Node *head=new Node(10);
   head->next=new Node(20);
   head->next->next=new Node(30);
   head->next->next->next=new Node(40);
   printlist(head);
   cout<<"\n";
   head=deltail(head);
   printlist(head);
}