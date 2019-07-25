/*
입력
첫 번째 줄에 제이지가 상상력을 발휘하여 가정한 횟수 T(1 ≤ T ≤ 1,000)가 주어진다.

다음 T개 줄에는 한 줄에 하나씩 제이지가 해본 가정에 대한 정보가 주어진다. 각 줄에는 두 개의 음이 아닌 정수 a(0 ≤ a ≤ 100)와 b(0 ≤ b ≤ 64)가 공백 하나를 사이로 두고 주어진다.

출력
각 가정이 성립할 때 제이지가 받을 상금을 원 단위의 정수로 한 줄에 하나씩 출력한다. 입력이 들어오는 순서대로 출력해야 한다.
*/
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	int testNum;
	int count = 1;
	vector<int> _2017(101,0);
	vector<int> _2018(65,0);
	int money2017[] = { 5000000,3000000,2000000,500000,300000,100000 };
	int money2018[] = { 5120000,2560000,1280000,640000,320000 };

	for (int i = 1; i <= 6; i++) {
		for (int j = i; j > 0; j--,count++) {
			_2017[count] = money2017[i-1];
		}
	}
	count = 1;
	for (int i = 1; i <= 5; i++) {
		for (int j = pow(2,i-1); j > 0; j--, count++) {
			_2018[count] = money2018[i - 1];
		}
	}

	cin >> testNum;

	for (int i = 0; i < testNum; i++) {
		int i1, i2;
		cin >> i1 >> i2;

		cout << _2017[i1] + _2018[i2] << endl;
	}



}