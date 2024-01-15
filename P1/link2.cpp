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
Node *insertlist(Node *head,int x)
{
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
}
void printlist(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head=insertlist(head,26);
    head=insertlist(head,34);
    head=insertlist(head,78);
    printlist(head);
}