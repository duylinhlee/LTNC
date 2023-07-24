#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec;
    int n, m, x, y, z;
    cin >>n;
    for(int i=0; i<n; i++){
        cin>>m;
        vec.push_back(m);
    }
    cin >> x>>y>>z;
    vec.erase(vec.begin()+x-1);
    vec.erase(vec.begin()+y-1 , vec.begin()+z-1);
    cout<< vec.size()<<endl;
    for (int i=0; i<vec.size(); i++){
        cout << vec[i]<<" ";
    
    }
    return 0;
}

