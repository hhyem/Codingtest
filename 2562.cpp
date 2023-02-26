#include <iostream>
using namespace std;

int main() {
	int num[9], max = 0, j;

	for (int i = 0; i < 9; i++) {
		cin >> num[i];
		if (max < num[i]) {
			max = num[i];
			j = i;
		}
	}
	cout << max << "\n" << j + 1;

	return 0;
}
