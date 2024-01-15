#include<iostream>
using namespace std;
int main()
{
   char str1[30],str2[10];
   int flag=0;
   cout<<"Enter the statement:";
   cin.getline(str1,30);
   cout<<"Enter the word to be find out";
   cin.getline(str2,10);
   for(int i=0;i<30;i++)
   {
       for(int j=0;j<10;j++)
       {
           if(str1[i]==str2[j])
           {
               flag++;
           }
           else
             {
                 break;
             }
       }
   }
   if(flag!=0)
   {
       cout<<"The word is present";
   }
   else{
    cout<<"The word is not present";
   }
   return 0;
}
