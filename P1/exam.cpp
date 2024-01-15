#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node *delpos(Node *head,int pos,int flag)
{
    int Length = length(head);
    int nodeFromBeginning = Length - pos + 1;
    Node *curr=head;
    Node *prev=head;
    if(head==NULL)
    return NULL;
    while(curr!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }

}
void printlist(Node *head)
{
    while (head!=NULL)
    {
        cout<<(head->data)<<" ";
        head=head->next;
    }
    
}
int main()
{
    int flag;
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    printlist(head);
    cout<<endl;
    delpos(head,4,flag);
    printlist(head);
}