#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	int ch[26] = { 0 };
	int num;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			num = str[i]-'a';
			
			if (ch[num] == 0)
			{
				ch[num] = i + 1;
			}
		}
	}
	
	for (int i = 0; i < 26; i++)
	{
		cout << ch[i] - 1 << " ";
	}
}