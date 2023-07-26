#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t; cin >> t;
	string str;
	while (t--)
	{
		cin >> str;
		int count = 0;
		int result = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '(') count++;
			else
			{
				if (count == 0) result = 1;
				else count--;
			}	
		}
		if (count > 0) result = 1;
		cout << (result ? "NO" : "YES") << "\n";
	}
	return 0;
}