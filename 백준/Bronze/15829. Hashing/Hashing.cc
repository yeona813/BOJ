#include <iostream>
#include <string>
using namespace std;

int main(void) {
	long long num;
	string str;
	long long mod = 1234567891;
	int r = 1;
	cin >> num;
	cin >> str;

	long long hash = 0;

	for (int i = 0; i < num; i++)
	{
		int check = str[i] - 'a' + 1;
		hash = ((hash + (check * r)) % mod) % mod;
		r = (r * 31) % mod;
	}

	cout << hash << endl;
}