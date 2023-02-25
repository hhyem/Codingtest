#include<iostream>
using namespace std;

int main() {
	int a, newnewA = 0;
	int divide10 = 0, sum = 0, newA = 0, cnt = 1;
	cin >> a; 
	newnewA = a;  
	while (true) {
		divide10 = newnewA % 10;
		sum = newnewA / 10 + divide10;
		if (sum >= 10) 
			sum = sum % 10;
		newA = divide10 * 10 + sum;
		if (newA == a) {
			cout << cnt << endl;
			break;
		}
		else if (newA != a) {
			cnt += 1;
			newnewA = newA; 
		}
	}
}
