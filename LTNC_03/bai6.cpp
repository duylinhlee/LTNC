#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string caesarCipher(string s, int z) {
    int size= s.size();
    int ascii;
    int k = z%26;
    for (int i=0; i<size; i++){
        ascii= (int) s[i];
        if (ascii<=90-k  && ascii>=65 )ascii +=k;
        else if (ascii>=97 && ascii<=122-k ){ ascii +=k; }
        else if (ascii>=90 - k +1 && ascii<=90 ) ascii = ascii -26+ k;
        else if (ascii>= 122-k+1 && ascii<=122){
            ascii = ascii -26+ k;
        }
        s[i] = (char) ascii;
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
