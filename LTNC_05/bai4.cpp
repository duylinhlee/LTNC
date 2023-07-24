#include <iostream>
#include <vector>
using namespace std;

int main(){
	int size1, size2;
	vector<int>v1;
	vector<int>v2;
	cin >>size1;
	
	for(int i=0; i<size1; i++){
		int m;
		cin >>m;
		v1.push_back(m);
	}
	cin >>size2;
	for (int i=0; i<size2; i++){
		int m;
		cin >>m;
		v2.push_back(m);
	}
	for (int j=0; j<size2; j++){
		int i;
		for (i=0; i<size1; i++){
			if (v2[j]==v1[i]) {
				cout<< "Yes "<<i+1<<endl;
				break;
			}
			else if (v2[j]<v1[i]){
				cout<<"No "<< v1[i]<<endl;
				break;
			}
		}		
	}
	return 0;
}
