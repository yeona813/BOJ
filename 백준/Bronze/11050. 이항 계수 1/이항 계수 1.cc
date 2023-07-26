#include <iostream>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	int num = 1;
	for (int i = 0; i < k; i++) num *= (n-i);
	for (int i = 0; i < k; i++) num /= (k - i);
	cout << num << endl;
}