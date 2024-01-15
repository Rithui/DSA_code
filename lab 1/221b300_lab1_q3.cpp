#include<iostream>
using namespace std;
int main()
{
  int n,flag=0,rem;
  cout<<"Enter the numebr:";
  cin>>n;
  for(int i=1;i<n;i++)
  {
    rem=n%i;
    if(rem==0)
    {
        flag++;
    }
  }
  if(flag==1)
  {
      cout<<"The given number is prime";
  }
  else
  {
      cout<<"The given number is not a prime";
  }
  return 0;
}
