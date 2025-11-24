#include <iostream>
#include <cmath> // 절댓값 함수 사용할 필요 없음
#include <algorithm>
using namespace std;

int main() {
	int x, y, w, h;
	int min_x=0, min_y=0;
	cin >> x >> y >> w >> h;
	//삼항연산
	//min_x = (abs(x - w) < abs(x - 0)) ? abs(x - w) : abs(x-0);
	//min_y = (abs(y - h) < abs(y - 0)) ? abs(y - h) : abs(y - 0);
	//cout << ((min_x < min_y) ? min_x : min_y);

	//if문
	//if (abs(x - w) < abs(x - 0)) min_x = abs(x - w);
	//else min_x = abs(x - 0);
	//if (abs(y - h) < abs(y - 0)) min_y = abs(y - h);
	//else min_y = abs(y - 0);

	//if (min_x < min_y) {
	//	cout << min_x;
	//}
	//else {
	//	cout << min_y;
	//}

	//min
	min_x = min(x, w - x);
	min_y = min(y, h - y);
	cout << min(min_x, min_y);
}