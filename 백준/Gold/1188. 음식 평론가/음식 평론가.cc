#include <iostream>
using namespace std;
int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;

	}
	return a;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	int count = 0;
	int a = gcd(n, m);
	if (n % m == 0) count = 0;
	else {
		count = m - a;
	}
	cout << count;
}