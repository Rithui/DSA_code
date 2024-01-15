#include<iostream>
using namespace std;
int main()
{
    char str1[20],str2[20],y;
    int j,n,i;
    cout<<"Enter the word to be reversed :";
    cin>>str1;
    n=sizeof(str1);
    for(i=n;i>0;i--)
    {
        y=str1[i];
        for(j=0;j<n;j++)
        {
            str2[j]=y;
            break;
        }
    }
    cout<<"The reverse of the given word : "<<str2;
}
