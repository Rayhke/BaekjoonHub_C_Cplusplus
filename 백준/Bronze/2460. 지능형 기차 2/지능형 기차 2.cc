#include <iostream>
using namespace std;

int main() {
	int a, b, n = 0, m = 0;
	for (int l = 0; l < 10; l++) {
		cin >> a >> b;
		n += (b - a);
		if (n > 10000) { n = 10000; }	// 이것을 넣은 이유? - ◆ 해설 1 ◆ 참고
		m = (n > m) ? n : m;
	}
	cout << m << endl;
	return 0;
}
/* ■ 설명 ■	 // 백준 - 브론즈 3 (2460번)
[지능형 기차 1 (2455번)과 구조는 동일함]

기차는 1 ~ 10번 역이 존재하며,
승객이 탑승하고, 내린 인원 수를 계산하고,
그 중에 가장 많은 인원 수가 탑승 했을 때를 기록하고, 출력하라

◆ 해설 1 ◆
이 기차는 최대 10000명의 인원이 탑승 가능하며,
인원 수가 초과할 것을 상정하여,

만일 10000명이 넘는 인원 수가 나올 것을 고려하여
10000명을 넘는 순간 10000명으로 되도록,
제한을 둘 것
*/
