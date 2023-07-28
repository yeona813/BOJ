#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	deque<int> deq;
	vector <int> result(n);
	for (int i = n - 1; i >= 0; i--) {
		while (!deq.empty() && deq.front() <= a[i]) deq.pop_front();
		result[i] = deq.empty() ? -1 : deq.front();
		deq.push_front(a[i]);

	}

	for (int i : result) cout << i << " "; 
	return 0;
}