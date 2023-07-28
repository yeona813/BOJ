#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, l;
	cin >> n >> l;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	deque<pair<int, int>> dq;

	for (int i = 0; i < n; i++) {
		if(!dq.empty() && i == dq.front().second + l) {
			dq.pop_front(); // 범위 넘어가면 제거해주기
		}
		while (!dq.empty() && dq.back().first > a[i]) {
			dq.pop_back(); // 최솟값이 될 수 없을 때 deque 안의 원소 삭제
		}
		dq.push_back({ a[i], i }); 
		cout << dq.front().first << " "; // 현재 구간에서 최솟값 출력
	}
	return 0;
}