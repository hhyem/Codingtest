#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, cnt = 0, re = 0;
	cin >> n;
	string str = "";

	for (int i = 0; i < n; i++) {
		std::cin >> str;
		cnt = 0, re = 0;
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == 'O') {
				cnt += 1;
				re += cnt;
			}
			else if (str[j] == 'X')
				cnt = 0;
		}
		std::cout << re << endl;
	}

	return 0;
}
