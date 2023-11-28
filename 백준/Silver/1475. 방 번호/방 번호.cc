#include <iostream>

using namespace std;

int main(void) {
	int room_number;
	int max = 0;
	
	cin >> room_number;

	int count[10] = { 0 };

	while (room_number != 0) {
		int digit = room_number % 10;
		count[digit]++;
		room_number /= 10;
	}

	count[6] = (count[6] + count[9] + 1) / 2;
	
	for (int i = 0; i < 9; i++) {
		if (max < count[i])
			max = count[i];
	}

	cout << max << endl;

	return 0;
}