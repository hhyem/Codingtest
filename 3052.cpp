#include <iostream>
using namespace std;

int main() {
	int n[11];
	int r[11], cnt = 0;
	
	for (int i = 0; i < 10; i++) {
		cin >> n[i];
		r[i] = n[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		int count = 0;		//같은 수 일때
		for (int j = i + 1; j < 10; j++) {
			if (r[i] == r[j]) 
				count += 1;
		}
		if (count == 0) {	//다른 수 일때
			cnt++;
		}
	}
	cout << cnt << '\n';

	return 0;
}
