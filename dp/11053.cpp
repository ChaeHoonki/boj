/*
가장 긴 증가하는 부분 수열
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	31466	11657	7953	36.996%
문제
수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.

예를 들어, 수열 A = {10, 20, 10, 30, 20, 50} 인 경우에 가장 긴 증가하는 부분 수열은 A = {10, 20, 10, 30, 20, 50} 이고, 길이는 4이다.

입력
첫째 줄에 수열 A의 크기 N (1 ≤ N ≤ 1,000)이 주어진다.

둘째 줄에는 수열 A를 이루고 있는 Ai가 주어진다. (1 ≤ Ai ≤ 1,000)..

출력 
첫째 줄에 수열 A의 가장 긴 증가하는 부분 수열의 길이를 출력한다.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> memo;
vector<int> number;
int main() {
	int len;
	cin >> len;
	memo.assign(len + 1, 0);
	number.assign(len + 1, 0);

	for (int i = 1; i < len+1; i++) {
		cin >> number[i];
	}
	memo[1] = 1;
	for (int i = 2; i < len + 1; i++) {
		for (int j = i - 1; j > 0; j--) {
			if (number[i] > number[j] && memo[i] <= memo[j]) {

				memo[i] = memo[j] + 1;
			}
			
			if (j == 1 && memo[i] == 0) {
				memo[i] = 1;
			}
			

		}
	}
	cout << *max_element(memo.begin(), memo.end());
}