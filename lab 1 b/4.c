#inlcude<stdio.h>
int calt(int i, int n, int A[n])
{
 for(i=0;i<n;i++)
  {
     if(A[i]==i)
      {
         return 1;
      }
     else
      {
         return 0;
      }
  }
}
int main()
{
  int n,A[n];
  int i;
  n=sizeof(A)/sizeof(A[0]);
  printf(""Enter the elements in the array:);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  calt(i, n, A[n])
}