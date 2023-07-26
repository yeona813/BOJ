#include <iostream>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	int h, w, n;

	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;
		int f, num;
		f = n % h;

		if (n%h == 0)
		{
			num = (n / h);
		}
		else
		{
			num = (n / h) + 1;
		}

		if (f == 0)
		{
			if (num < 10)
			{
				cout << h << 0 << num << endl;
			}
			else
				cout << h << num << endl;
		}
		else
		{
			if (num < 10)
			{
				cout << f << 0 << num << endl;
			}
			else
				cout << f << num << endl;
		}
	}


}