#include<iostream>
#include<deque>
using namespace std;

int main(void)
{
	int n, num;
	cin >> n;
	string str;
	deque <int> deq;
	while(n--)
	{
		cin >> str;
		if (str == "push_front")
		{
			cin >> num;
			deq.push_front(num);
		}
		else if (str == "push_back")
		{
			cin >> num;
			deq.push_back(num);
		}
		else if (str == "pop_front")
		{
			if (!deq.empty())
			{
				cout << deq.front() << "\n";
				deq.pop_front();
			}
			else cout << "-1" << "\n";
		}
		else if (str == "pop_back")
		{
			if (!deq.empty())
			{
				cout << deq.back() << "\n";
				deq.pop_back();
			}
			else cout << "-1" << "\n";
		}
		else if (str == "size") cout << deq.size() << "\n";
		else if (str == "empty")
		{
			if (!deq.empty()) cout << "0" << "\n";
			else cout << "1" << "\n";
		}
		else if (str == "front")
		{
			if (!deq.empty())cout << deq.front() << "\n";
			else cout << "-1" << "\n";
		}
		else if (str == "back")
		{
			if (!deq.empty()) cout << deq.back() << "\n";
			else cout << "-1" << "\n";
		}

	}
	return 0;
}