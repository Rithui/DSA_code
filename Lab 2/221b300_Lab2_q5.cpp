#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int bin,num,rem,k,pdt,add=0;
    cout<<"Enter the binary digit:";
    cin>>bin;
    for(int i=0;i<=10;i++)
    {
        rem=bin%10;
        pdt=rem*pow(2,i);
        add=add+pdt;
        bin=bin/10;

    }
    cout<<"The decimal equivalent of the given number is"<<add;
    return 0;
}