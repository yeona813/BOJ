#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	int sum = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			sum += a[j];
			if (sum == m) {
				cnt++;
			}
		}
		sum = 0;
	}

	cout << cnt << endl;
}