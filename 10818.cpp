#include <iostream>
using namespace std;

int main() {
	int n, max = -1000000, min = 1000000, j;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> j;
		if (min > j)
			min = j;
		if (max < j)
			max = j;
	}
	cout << min << " " << max << endl;

	return 0;
}
