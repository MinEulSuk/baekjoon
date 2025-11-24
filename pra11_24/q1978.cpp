#include <iostream>
using namespace std;
int main() {
	int repeatNum; // 반복할 횟수
	int count = 0;
	cin >> repeatNum;
	for (int i = 0; i < repeatNum; i++) {
		bool isPrime = true;
		int inputNum; // 소수인지 확인할 숫자
		cin >> inputNum;

		if (inputNum == 1)isPrime = false;

		for (int j = 2; j < inputNum; j++) { //소수인지 찾는 로직
			if (inputNum % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime)count++;
	}
	cout << count;
}