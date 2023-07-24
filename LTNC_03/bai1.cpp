#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    
    string a,b;
    cin>> a >> b;
    int la = a.size();
    int lb = b.size();
    string a_b = a+b;
    
    // swap
    char s = a[0];
    a[0] = b[0];
    b[0] = s;
    
    cout << la<<" ";
    cout << lb<< endl;
    cout << a_b<< endl;
    cout << a<<" ";
    cout << b<< endl;
  
    return 0;
}

