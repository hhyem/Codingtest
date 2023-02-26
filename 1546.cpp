#include <iostream>
using namespace std;

int main() {
	int n, score[1000] = {}, max = 0;
	cin >> n; //시험 본 과목 개수
	double result = 0.0;

	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (max < score[i])
			max = score[i];
		result += score[i];
	}

	result = (result / max * 100) / n;

	cout << fixed;
	cout.precision(6);
	cout << result << endl;

	return 0;
}
