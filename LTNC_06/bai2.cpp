#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class student{
    public:
        int age;
        int standard;
        string first_name;
        string last_name;
};

int main() {
    student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    
    cout << st.age << "\n";
    cout << st.last_name << ", " << st.first_name << "\n";
    cout << st.standard << "\n";
    cout << "\n";
    cout << st.age<<","<< st.first_name<< ","<< st.last_name<<"," <<st.standard;
    
    return 0;
}

