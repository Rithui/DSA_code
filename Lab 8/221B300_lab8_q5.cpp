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
Node *delpos(Node *head,int pos)
{
    Node *curr=head;
    Node *prev=head;
    if(curr==NULL)
    {
        return NULL;
    }
    for(int i=1;i<=pos-1 && curr!=NULL;i++)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete(curr);
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
    printlist(head);
    cout<<"\n";
    delpos(head,4);
    printlist(head);
}
