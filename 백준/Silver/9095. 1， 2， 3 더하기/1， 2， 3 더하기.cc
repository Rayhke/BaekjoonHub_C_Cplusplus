#include <iostream>
using namespace std;

int main() {
	int A[11] = { 1,1,2 }, T, N; cin >> T;
	for (int n = 3; n < 11; n++) { A[n] = A[n - 1] + A[n - 2] + A[n - 3]; }
	for (int n = 0; n < T; n++) { cin >> N; cout << A[N] << '\n'; }
	return 0;
}
/* ■ 설명 ■
1을 만드는 방법은 1가지 이며
(1)

2를 만드는 방법은 2가지 이며
(1 + 1, 2)			// 즉 1가지 방법이 더 추가됨

3을 만드는 방법은 4가지 이며
(1 + 1 + 1)			// 즉 2가지 방법이 더 추가됨
(1 + 2)
(2 + 1)
(3)

이러한 상태에서 1 ~ 3을 조합한 경우의 수만을 고려하기 때문에
이것을 피보나치 함수의 방식을 응용하면 된다.

막상 어려운 내용에 비해, 코드가 참 심플해서 김빠질 것 같은 데
의외로 이러한 발상을 떠올리는 데, 꽤나 만만치 않았다...
*/
