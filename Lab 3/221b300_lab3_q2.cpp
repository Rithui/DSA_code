#include<iostream>
using namespace std;
int main()
{
    int n,key,flag=0;
    int arr[6]={3,6,7,2,9,5};
    cout<<"The given array is:";
     for(int h=0;h<6;h++)
    {
        cout<<arr[h]<<"\t";
    }
    cout<<endl;
    cout<<"Enter the element to be searched:";
    cin>>key;
    cout<<endl;
    for(int i=0;i<6;i++)
    {
        if(key==arr[i])
               flag++;
        else
            continue;
    }
    if(flag!=0)
        cout<<"The given element is present in the array";
    else
        cout<<"The given element is not present in the array";
    return 0;
}
