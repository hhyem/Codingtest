#include <iostream>
using namespace std;

int main() {
	int C, N, score[50] = { 0, };
	float avg = 0;

	cin >> C;
	for (int i = 0; i < C; i++) {
		cin >> N;
		int sum = 0, cnt = 0;
		for (int j = 0; j < N; j++) {
			cin >> score[j];
			sum += score[j];
		}
		avg = (double)sum / N;

		//평균을 넘는 학생 수 구하기
		for (int k = 0; k < N; k++) {
			if (avg < score[k]) 
				cnt += 1;
		}

		cout << fixed;
		cout.precision(3);

		cout << (double)cnt / N * 100 << "%" << endl;
	}

	return 0;
}
