#include <iostream>
using namespace std;


bool isprime(int n)
{
	if (n == 1)
	{
		return false;
	}

	for (int j = 2; j < n; j++)
	{
		if (n % j == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int num;
	int a[100];
	int count = 0;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> a[i];
		if (isprime(a[i]))
		{
			count++;
		}

	}

	cout << count << endl;
	return 0;
}