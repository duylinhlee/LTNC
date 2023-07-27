#include <iostream>
#include <math.h>

using namespace std;

int number, n;
int cnt;
bool visit[32];

void reset() {
	for (int i = 0; i <= pow(number, 1.0/n); i++) {
		visit[i] = false;
	}
}

void backtrack(int K, int sum) {
	if (sum == number) {
		cnt++;
		return;
	}
	if (K == 0) return;
	if (sum > number) return;
	

	for (int i = 0; i < 2; i++) {
		// chon
		if (i == 0) {
			visit[K] = true;
			backtrack(K - 1, sum + pow(K, n));
			visit[K] = false;
		} else {
			backtrack(K -1, sum);
		}
	}
}

int main() {
	cin >> number >> n;
	cnt = 0;
	reset();
	int K = pow(number, (1.0/n));
	backtrack(10, 0);
	cout << cnt;
	return 0;
}
