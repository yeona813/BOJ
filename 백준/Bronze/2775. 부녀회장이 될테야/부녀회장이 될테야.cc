#include <iostream>
using namespace std;

int a[100] = {};

int main(void)
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int k, n;
		cin >> k >> n;
		int sum = 0;
		for (int j = 1; j <= n; j++)
		{
			sum = sum + j;
			a[j] = sum;
		}

		if (k <= 1)
		{
			cout << a[n] << endl;
		}
		else if (k > 1)
		{
			for (int l = 2; l <= k; l++)
			{
				for (int m = 2; m <= n; m++)
				{
					a[m] = a[m - 1] + a[m];
				}
			}
			cout << a[n] << endl;
		}
	}
	return 0;
}