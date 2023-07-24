#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
	int n= s.size();
	if(s[n-2] == 'A'){
		s.erase(n-2,2); //xoa AM
		if(s[0]=='1' && s[1]=='2'){
			s.replace(0,1,"0");
			s.replace(1,1,"0");
		}
	}
	else {
		s.erase(n-2, 2);
		if(s[0]=='1' && s[1]=='2'){}
		else {
			string hour = s.substr(0,2);
			int gio= stoi(hour);
			gio = gio +12;
			hour = to_string(gio);
			s.replace(0,2,hour);
			}
	cout << s;
		
}return s;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


