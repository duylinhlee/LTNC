#include <iostream>
#include <map>

using namespace std;

int main(){
	int size_a;
	cin >>size_a;
	int size_b=size_a+1;
	int arr_a[size_a];
	int arr_b[size_b];
	map<int,int>mp; 
	
	for (int i=0; i<size_a; i++){
		cin >> arr_a[i];
		mp[arr_a[i]] += 1;
	}
	for (int j=0; j<size_b; j++){
		cin >>arr_b[j];
		if (!mp[arr_b[j]]) cout << arr_b[j]; //kiem tra arr_b[j] co trong map
	}
	return 0;
}
