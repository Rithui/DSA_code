#include <bits/stdc++.h>
using namespace std;
int MaxRepertingElement(int* array, int n)
{
  for (int i = 0; i< n; i++)
  {
    array[array[i]%n] += n;
  }
  int max_element = INT_MIN,result = 0;
  for (int i = 0; i < n; i++)
  {
    if (array[i] > max_element)
    {
      max_element = array[i];
      result = i;
    }
  }
  for (int i = 0; i< n; i++)
  {
    array[i] = array[i]%n; 
  }
  return result;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<MaxRepertingElement(a, n)<<endl;
    return 0;
}