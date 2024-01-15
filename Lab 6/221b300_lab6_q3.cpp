#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in tthe array:";
    cin>>n;
    int mini;
    int arr[n];
    int temp;
    cout<<"Enter the elements in the array:";
    for(int y=0;y<n;y++)
    {
        cin>>arr[y];
    }
    for(int i=0;i<n-2;i++)
    {
        mini=i;
        for(int j=i+1;j<n-1;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        if(mini!=i)
        {
          temp=arr[mini];
          arr[mini]=arr[i];
          arr[i]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
