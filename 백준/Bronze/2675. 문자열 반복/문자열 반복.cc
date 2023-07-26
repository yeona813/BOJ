#include <iostream>
using namespace std;
int main(void)
{
	int T, num;
	string str;

	cin >> T;

	while(T--)
	{
		cin >> num >> str;

		for (int j = 0; j < str.size();j++)
		{
			for (int k = 0; k < num; k++)
			{
				cout << str[j];
			}
		}
		cout << "\n";
	}
}