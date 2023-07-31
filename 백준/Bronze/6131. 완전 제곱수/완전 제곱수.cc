#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	int count = 0;
	for (int i = 1; i <= 500; i++) {
		for (int j = i; j <= 500; j++) {
			if (i * i + n == j * j) count++;
		}
	}
	cout << count;
}