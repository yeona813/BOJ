#include <iostream>
using namespace std;

int main()
{
	long long val1, val2;
	long long result = 0;
	cin >> val1 >> val2;
	if (val1 < val2)
	{
		result = val2 - val1;
	}
	else
	{
		result = val1 - val2;
	}
	cout << result << endl;
	return 0;
}