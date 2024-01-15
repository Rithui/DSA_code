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
    while (head!=NULL)
    {
        cout<<(head->data)<<" ";
        head-head->next;
    }
    
}
Node *delpos(Node *head,int pos)
{
    int flag=0;
    Node *prev=head;
    Node *temp=head;
    if(head==NULL)
    {
        return NULL;
    }
    while (temp->next!=NULL)
    {
        flag++;
    }
    pos=flag-pos;
    for(int i=1;i<=pos-1 && temp!=NULL;i++)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    return head;
}
int main()
{
    int x;
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    printlist(head);
    cout<<"\n";
    cout<<"Enter the position from last to be deleted";
    cin>>x;
    cout<<"\n";
    delpos(head,x);
    printlist(head);

}