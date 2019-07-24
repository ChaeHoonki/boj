/*
소수 찾기
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
2 초	  128 MB	   31042	14260	  11924	   48.913%
문제
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

입력
첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.

출력
주어진 수들 중 소수의 개수를 출력한다.
*/
#include <iostream>
#include <vector>
vector<bool> num(1001, false); // index 1000번까지 false로 초기화
vector<bool> check(1001, false);
using namespace std;
int main() {
	int N; //숫자갯수
	cout << 1 << endl;

}