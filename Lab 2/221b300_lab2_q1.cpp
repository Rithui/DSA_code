#include<iostream>
using namespace std;
int main()
{
    int n;
    int fib[10];
    fib[0]=0;
    fib[1]=1;
    cout<<"input the number of terms:";
    cin>>n;
    for(int x=0;x<2;x++)
    {
        cout<<fib[x]<<endl;
    }
    for(int i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        cout<<fib[i]<<endl;
    }
    return 0;
}
