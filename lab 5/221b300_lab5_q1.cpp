#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++){
        cin>>arr[i];
        cout<<" ";
    }
    int key, x=0;
    cin>>key;
    for(int i=0; i<N; i++){
        if(arr[i]==key){
            cout<<i<<endl;
        }
        else
            x++;
      }
    if(x==5){
        cout<<"-1";
    }
    return 0;
}
