// // Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findDigits(int n) {
    int count = 0;
    int x =n ;
    int t;
    if (n<=10) return 1;
    while (x>=1){
            t=x % 10; x /= 10;
            if (t==0) continue;
            else if (n%t == 0) count++;
           
    }
     
     return count;
}

int main()
{
    int n;
    cin >>n;
    int arr[n];
    for (int i=0; i<n; i++) cin>>arr[i];
    for (int i=0; i<n; i++) cout <<findDigits(arr[i])<< endl;
}

