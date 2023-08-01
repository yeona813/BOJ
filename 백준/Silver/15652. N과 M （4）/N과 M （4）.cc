#include <iostream>
#include <vector>
using namespace std;
int n, m;
vector<int> a(10);

void func(int k, int num) {
	if (num == m) {
		for (int i = 0; i < m; i++) cout << a[i] << " ";
		cout << "\n";
	} 
	else {
		for (int i = k; i <= n; i++) {
			a[num] = i;
			func(i, num+1);
		}
	}
}
int main(void) {
	cin >> n >> m;
	func(1, 0);
}