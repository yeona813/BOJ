#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num = 0;
		int count = 0;

		string str;
		cin >> str;
	
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == 'O')
			{
				num += ++count;
			}
			else
				count = 0;
		}
		cout << num << endl;
	}
	
} 