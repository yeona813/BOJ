
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[3];

	while(1)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> a[i];
		}

		sort(a, a + 3);
		
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
		{
			break;
		}
		
		if (a[2] * a[2] == a[0] * a[0] + a[1] * a[1])
		{
			cout << "right";
		}
		else
		{
			cout << "wrong";
		}
		cout << endl;
	}
}