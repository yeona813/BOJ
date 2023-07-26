#include <iostream>
using namespace std;

int main(void) {
	int a[9][9];
	int max = 0;
	int row = 0;
	int col = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> a[i][j];

			if (a[i][j] >= max)
			{
				max = a[i][j];
				col = i + 1;
				row = j + 1;
			}
		}
	}
	cout << max << endl;
	cout << col << " " << row << endl;

	return 0;
}