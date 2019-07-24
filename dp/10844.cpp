/*
쉬운 계단 수 실패
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	40187	12092	8729	28.315%
문제
45656이란 수를 보자.

이 수는 인접한 모든 자리수의 차이가 1이 난다. 이런 수를 계단 수라고 한다.

세준이는 수의 길이가 N인 계단 수가 몇 개 있는지 궁금해졌다.

N이 주어질 때, 길이가 N인 계단 수가 총 몇 개 있는지 구하는 프로그램을 작성하시오. (0으로 시작하는 수는 없다.)

입력
첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 100보다 작거나 같은 자연수이다.

출력
첫째 줄에 정답을 1,000,000,000으로 나눈 나머지를 출력한다.

*/
#include<iostream>
#include <vector>

using namespace std;
vector< vector<int> > memo;
int main() {
	int len;
	int result = 0;
	cin >> len;
	memo.assign(10, vector<int>(len + 1, 0));

	for (int i = 1; i < 10; i++) {
		memo[i][1] = 1;
	}

	for (int j = 2; j <= len; j++) {
		for (int i = 0; i < 10; i++) {
			if (i == 0) {
				memo[i][j] = memo[i + 1][j - 1] % 1000000000;
			}
			else if (i == 9) {
				memo[i][j] = memo[i - 1][j - 1] % 1000000000;
			}
			else {
				memo[i][j] = (memo[i - 1][j - 1] + memo[i + 1][j - 1] )% 1000000000;

			}
		}
	}

	for (int i = 0; i < 10; i++) {
		result += memo[i][len];
	}
	cout << result << endl;
}