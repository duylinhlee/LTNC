#include <bits/stdc++.h>

using namespace std;


string kangaroo(int x1, int v1, int x2, int v2) {
    int s1=x1, s2=x2,count=0;
    if (v1<v2) return "NO";
    else {
        while (s1<s2){
        
        s1+= v1;
        s2 +=  v2;
        if(s1==s2){return "YES";}
        count++;
    } 
   
        return "NO";
    }
}
    

int main()
{
    int x1, v1, x2, v2;
    cin >> x1>> v1>> x2 >>v2;
    string s = kangaroo(x1,v1, x2, v2);
    cout <<s;
}

