#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number elements in the array:";
    cin>>n;
        int arr[n];
    cout<<"Enter the elements in the array:\n";
    for(int k=0;k<n;k++)
    {
        cin>>arr[k];
    }
    for(int i=1;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"\n";
    cout<<"\n";
    for(int y=0;y<n;y++)
    {
        cout<<arr[y]<<"\n";
    }
    return 0;
}
