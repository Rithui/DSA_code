#include<iostream>
using namespace std;
int main()
{
    int x,y,rem=1;
    cout<<"Enter the base number: ";
    cin>>x;
    cout<<"Enter the power number: ";
    cin>>y;
    for(int i=0;i<y;i++)
    {
        rem=rem*x;
    }
    cout<<"The power of the given number is "<<rem;
    return 0;
}
