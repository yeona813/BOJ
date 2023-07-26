#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	int num = a * b * c;
	int t;
	string str = to_string(num);
	int ch[10] = {0};
	
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			t = str[i] - '0';
			ch[t]++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << ch[i] << endl;
	}
} 