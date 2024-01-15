#include <iostream>
using namespace std;
  
long decimalToBinary(long n);
 
int main() {
    long decimal;
     
 cout <<"Enter a decimal number\n";
    cin >> decimal;
    cout << "Binary number = " << dB(decimal);
      
    return 0;
}
long dB(long n) {
    int remainder; 
    long binary = 0, i = 1;
   
    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}