#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */
int findMax (vector<int> a){
    int max=a[0];
    for (int i=0; i<a.size(); i++)
    {
        if (max<a[i]) max = a[i];
    }
    return max;
}

int findMin (vector<int> a){
    int min=a[0];
    for (int i=0; i<a.size(); i++)
    {
        if (min >a[i]) min = a[i];
    }
    return min;
}

bool checkBC(vector<int>a,int n) {
    for (int i=0; i<a.size(); i++)
    {
        if (n%a[i] !=0) return false;
    }
    return true;
};

bool checkUC(vector <int>b,int n){
    for(int i=0; i<b.size(); i++)
    {
        if(b[i]%n !=0) return false;
    }
    return true;
};

int getTotalX(vector<int> a, vector<int> b) {
    int max_a = findMax(a);
    int min_b = findMin(b);
    int count = 0;
    for (int i=max_a; i<=min_b; i++ )
    {
        if (checkBC(a,i))
        {
            if (checkUC(b,i)) count +=1;
        }
    }
    return count;
}

int main()
{
    vector<int>a;
    vector<int>b;
    int m,n;
    cin >>m>>n;
    for (int i=0; i<m; i++)
    {
        int x ;
        cin >>x;
        a.push_back(x);
    }
    for (int i=0; i<n; i++)
    {
        int x ;
        cin >>x;
        b.push_back(x);
    }
    cout <<getTotalX(a,b);
}
