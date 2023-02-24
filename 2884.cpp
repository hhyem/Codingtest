#include<iostream>
using namespace std;

int main() {
	int hour, min;
	cin >> hour >> min;

	if (min >= 45)
		min -= 45;
	else {
		hour -= 1;
		min = min + 60 - 45;
		if (hour < 0) 
			hour = 23;
	}
	cout << hour << " " << min << endl;
}
