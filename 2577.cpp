#include <iostream>
using namespace std;

int main() {
	int a, b, c, R, n;
	cin >> a >> b >> c;
	R = a * b*c;
	int num[10] = { 0, };

	for (int i = 0; R > 0; i++) {
		n = R % 10;
		num[n]++;
		R /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << num[i] << '\n';
	}

	return 0;
}
