#include <stdio.h>
using namespace std;
void rec(int arr[10])
{
    for(int j=0;j<10;j++)
    {
        flag=0;
            if(arr[flag]<=arr[j])
            {
                flag++;
            }
            else if(arr[flag]>arr[j])
                return j;
            else
                continue;
        }
    }
}
int main()
{
    int n,arr[10],flag=0,j;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"The index at which the element value become more"<<rec(arr[10]);
    return 0;
}
