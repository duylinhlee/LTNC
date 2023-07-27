#include<iostream>
#include<string.h>

using namespace std;
//aba
//a, b, a
void SinhChuoi(int i, int n, string s, string value){
    if(i <=3){ // 0: 48
        if(s.size() ==3)
            cout << s << " ";
        for(int j=0; j<n; j++){
            SinhChuoi(i+1, n,s + value[j], value);
        }
    }
}

int main(){
    string s;
    cin >> s;
    SinhChuoi(0, s.size(), "", s);
    return 0;
}
