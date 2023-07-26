#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(void)
{
	int num = 1;
	string str;
	getline(cin, str);

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			num++;
		}
	}
	if (str[0] == ' ')
	{
		num--;
	}
	if (str[str.size()-1] == ' ')
	{
		num--;
	}
	cout << num;
}