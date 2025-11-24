#include <iostream>
using namespace std;
int main() {
	int inputA, inputB;
	int min = 10000, total = 0;
	cin >> inputA >> inputB;

	for (int i = inputA; i <= inputB; i++) {
		bool isPrime = true;
		if (i == 1) continue;
		for (int j = 2; j < i; j++) {
			if (i % j == 0 && j != 1) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			total += i;
			if (min > i)min = i;
		}
	}
	if (total != 0) {
		cout << total << endl;
		cout << min;
	}
	else cout << -1;

}