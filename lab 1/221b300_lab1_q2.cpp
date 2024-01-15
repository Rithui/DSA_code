#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,x;
    cout<<"\nEnter The Limit: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter The Value : ";
        cin>>a[i];
    }
    cout<<"\nEnter The Value to Search :";
    cin>>x;
 
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"Value Found @"<<i;
            return 0;
        }
    }
    cout<<"Value Not Found";
    return 0;
}