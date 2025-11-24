#include <iostream>
using namespace std;


int main() {
	int x_first, x_second, x_third, y_first, y_second, y_third;
	cin >> x_first >> y_first >> x_second >> y_second >> x_third >> y_third;
	int ans_x = x_first ^ x_second ^ x_third; // xor연산 같은 값이 있으면 0이 됨
	int ans_y = y_first ^ y_second ^ y_third;
	cout << ans_x << " " << ans_y;

}