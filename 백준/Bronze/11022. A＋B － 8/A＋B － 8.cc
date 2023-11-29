#include <iostream>

using namespace std;

int main(void) {

	int N, num1, num2;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num1 >> num2;
		cout << "Case #" << i + 1 << ": " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	}

	return 0;
}

