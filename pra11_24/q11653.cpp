#include <iostream>
using namespace std;
int main() {
	int inputNum;
	cin >> inputNum;

	for (int i = 2; i <= inputNum;) {
		if (inputNum % i == 0) {
			cout << i << endl;
			inputNum /= i;
		}
		else i++;
	}

}