#include<iostream>
#include<bits/stdc++.h>
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
Node *delhead(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    else{
        Node *temp=head->next;
        delete head;
        return temp;
    }
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head=delhead(head);
    printlist(head);
    return 0;
}