#include<iostream>
using namespace std;
int sum(int x, int y, int z)
{
   return x+y+z;

}

float sum(float x, float y, float z)
{
   return x+y+z;

}

double sum(double x, double y, double z)
{
   return x+y+z;

}

long double sum(long double x, long double y, long double z)
{
   return x+y+z;

}

int main()
{
  cout<<"The sum of the three integers are"<<sum(10, 20, 39);
  cout<<"The sum of the three integers are"<<sum(10,87, 20.98, 39.5);
  cout<<"The sum of the three integers are"<<sum(10.78960, 20.967845, 39.54378);
  cout<<"The sum of the three integers are"<<sum(10009876.67895, 207856349.678945, 3978456.96734);
  return 0;
}
