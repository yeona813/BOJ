#include <iostream>
using namespace std;

int main(void)
{
	int n, m;
	cin >> n >> m;
	int a[100][100], b[100][100];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] + b[i][j] << " ";
		}

		cout << endl;
	}
}