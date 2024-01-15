#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int a[6]={12,13,3,7,8,9};
    cout<<"Enter the new element to be inserted:";
    cin>>n;
    cout<<endl;
    cout<<"Enter the index position where to insert the new element:";
    cin>>i;
    cout<<endl;
    for(int x=0;x<6;x++)
    {
        if(x==i-1)
        {
          a[x]=n;
        }
        else
            continue;
    }
    cout<<"The array after inserting the element is:";
    for(int j=0;j<6;j++)
    {
       cout<<a[j]<<endl;
    }
    return 0;
}
