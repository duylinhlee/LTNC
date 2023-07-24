
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >>n;
      int arr[n];
      int swarr[n];
      
      for (int i=0; i<n; i++){
          cin>>arr[i];
        
      }
      int t =n-1;
      
      while(t>=0) {
          cout << arr[t]<<" ";
          t--;
      }
      
    return 0;
}


