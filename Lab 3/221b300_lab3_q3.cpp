#include<iostream>
using namespace std;
int main()
{
    int n,j,del;
    int i,t,index,flag=0;
    int arr[6]={4,7,3,8,9,2};
    cout<<"Enter the element to be deleted:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(n==arr[i]){
                flag++;
                index=i;
                break;
        }
        else
            continue;
    }
    for(int h=0;h<n;h++)
    {
        if(flag!=0)
            cout<<"The given element is present";
        else
            cout<<"Error";
    }
    while(flag!=0)
    {
        del=arr[index];
        for(j=index;j<6;j++)
        {
            for(int k=index+1;k<6;k++)
            {
                arr[j]=arr[k];
            }
        }
    }
    for(t=0;t<=j;t++)
    {
        cout<<arr[t];
    }
    return 0;
}
