#include <iostream>
using namespace std;

int main(void)
{
	int a[10];
	int num = 0;
	int tmep;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++)
	{
		a[i] = a[i] % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (a[i] > a[j])
			{
				tmep = a[i];
				a[i] = a[j];
				a[j] = tmep;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (a[i] != a[i + 1])
		{
			num++;
		}
	}

	cout << num << endl;
}