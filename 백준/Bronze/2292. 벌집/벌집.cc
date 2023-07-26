#include <iostream>
using namespace std;


int main(void)
{
	int n;
	cin >> n;
	int floor = 1;
	int max = 1;
	int add = 6;

	while (1)
	{
		if (n <= max) break;

		max += add;
		add += 6;
		floor++;
	}

	cout << floor;
	return 0;

}