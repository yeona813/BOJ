#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int t; cin >> t;
	vector<int> num(t);
	for (int i = 0; i < t; i++) {
		cin >> num[i];
	}
	sort(num.begin(), num.end());

	int a = 0; // 순회하면서 최댓값을 저장할 요소
	do {
		int b = 0; // 두 값의 차이의 절댓값을 저장하는 요소
		for (int i = 1; i < t; i++) b += abs(num[i] - num[i - 1]);
		a = max(a, b);
	} while (next_permutation(num.begin(), num.end()));

	cout << a;

}