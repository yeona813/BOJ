#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int num = 0;

	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				num = a[j];
				a[j] = a[j + 1];
				a[j + 1] = num;
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}