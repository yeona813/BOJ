#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
vector<int> a(10);

void func(int num) {
	if (num == m) {
		for (int i = 0; i < m; i++) cout << a[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 1; i <= n; i++) {
			a[num] = i;
			func(num + 1);
	}
}
int main(void) {
	cin >> n >> m;
	func(0);

}