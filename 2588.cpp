#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	cin >> a >> b;

	int n1, n2, n3, n4;
	n1 = a * (b % 10);
	cout << n1 << endl;
	n2 = a * (b / 10 % 10);
	cout << n2 << endl;
	n3 = a * (b / 100);
	cout << n3 << endl;
	n4 = n1 + (n2 * 10) + (n3 * 100);
	cout << n4 << endl;
}
