#include<iostream>
using namespace std;
int main()
{
    int n;
    int j;
    int key;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array";
    for(int h=0;h<n;h++)
    {
        cin>>arr[h];
    }
    for(int i=0;i<=n-1;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for(int x=0;x<n;x++)
    {
        cout<<arr[x];
    }
    return 0;
}
