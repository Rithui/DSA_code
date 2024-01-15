#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int pro=0;
    cout<<"Enter the first number:";
    cin>>n;
    cout<<"Enter the second number:";
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        pro=pro+n;
    }
    cout<<"The product of the numbers are "<<pro;
    return 0;
}
