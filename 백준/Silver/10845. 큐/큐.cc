#include<iostream>
#include<queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, num;
	cin >> n;
	string str;
	queue <int> q;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> num;
			q.push(num);
		}
		else if (str == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << "\n";
				q.pop();
			}
			else cout << "-1" << "\n";
		}
		else if (str == "size") cout << q.size() << "\n";
		else if (str == "empty")
		{
			if (!q.empty()) cout << "0" << "\n";
			else cout << "1" << "\n";
		}
		else if (str == "front")
		{
			if (!q.empty())cout << q.front() << "\n";
			else cout << "-1" << "\n";
		}
		else if (str == "back")
		{
			if (!q.empty()) cout << q.back() << "\n";
			else cout << "-1" << "\n";
		}

	}
	return 0;
}