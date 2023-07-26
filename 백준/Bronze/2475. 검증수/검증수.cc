#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d, e;
	int n1, n2, n3, n4, n5;
	int num = 0;
	cin >> a >> b >> c >> d >> e;
	n1 = a * a;
	n2 = b * b;
	n3 = c * c;
	n4 = d * d;
	n5 = e * e;
	num = n1 + n2 + n3 + n4 + n5;
	cout << num % 10 << endl;

}