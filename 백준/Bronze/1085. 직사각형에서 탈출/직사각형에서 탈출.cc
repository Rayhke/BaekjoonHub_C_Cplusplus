#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	x = (x < (w - x)) ? x : (w - x); // x축 기준으로 내 위치 (x, 0)에서 (0, 0)와 (w, 0) 중 어디가 가까운 위치인가?
	y = (y < (h - y)) ? y : (h - y); // y축 기준으로 내 위치 (0, y)에서 (0, 0)와 (0, h) 중 어디가 가까운 위치인가?
	h = (x < y) ? x : y;	// 위에서 자신의 위치 (x, y) 기준으로, (0, 0) ~ (w, h)의 크기인 직사각형의
	cout << h;		// 가로(↕), 세로(↔) 방향의 모서리 중 어디가 가까운 위치인가?
	return 0;
}
/* ■ 설명 ■ 
*/
