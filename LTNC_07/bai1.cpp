#include <iostream>
#include <string>
#include <vector>

using namespace std;


int check(vector<int>v, int l,int r, int x)
{
    int mid= (r+l)/2;
    if (l>r) return -1;
    if (v[mid] == x) return mid +1;
    else if (v[mid] < x) return check(v, mid+1, r, x);
    else if (v[mid] > x) return check(v, l, mid -1, x);
    
}

int main()
{
    int n, x;
    cin >> n >>x;
    vector<int>v;
    for (int i=0; i<n; i++)
    {
        int m;
        cin>>m;
        v.push_back(m);
        
    }
    int l=0;
    int r=n-1;
    cout <<check(v, l, r, x);
}

