/*
���� �� �����ϴ� �κ� ����
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	256 MB	31466	11657	7953	36.996%
����
���� A�� �־����� ��, ���� �� �����ϴ� �κ� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ���, ���� A = {10, 20, 10, 30, 20, 50} �� ��쿡 ���� �� �����ϴ� �κ� ������ A = {10, 20, 10, 30, 20, 50} �̰�, ���̴� 4�̴�.

�Է�
ù° �ٿ� ���� A�� ũ�� N (1 �� N �� 1,000)�� �־�����.

��° �ٿ��� ���� A�� �̷�� �ִ� Ai�� �־�����. (1 �� Ai �� 1,000)..

��� 
ù° �ٿ� ���� A�� ���� �� �����ϴ� �κ� ������ ���̸� ����Ѵ�.
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