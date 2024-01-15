#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,pro=1,prod=1,produ=1;
    cout<<"Enter the number:";
    cin>>n;
        for(int i=1;i<n;i++)
        {
            pro=i*i;

            sum=pro+sum;
        }
        cout<<"THE SUM OF THE SQUARES ARE:"<<sum;
    return 0;
}
