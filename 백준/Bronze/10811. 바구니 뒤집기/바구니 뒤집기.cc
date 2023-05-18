#include <iostream>
using namespace std;

int main() {
	int a[101] = {}, n, m, o, p, q;
	cin >> n >> m;
	for (int b = 1; b <= n; b++) { a[b] = b; }
	for (int c = 0; c < m; c++) {
		cin >> o >> p;
		for (int d = 0; d <= (p - o) / 2; d++) {		// 이렇게 설계한 이유는 - ◆ 해설 1 ◆ 참고
			q = a[o + d];
			a[o + d] = a[p - d];
			a[p - d] = q;
		}
	}
	for (int d = 1; d <= n; d++) { cout << a[d] << " "; }
	return 0;
}
/* ■ 설명 ■
백준 - 브론즈 (10813번) 참고

바꾸는 것 동일하지만 거기서 규칙을 추가하여,
[o] 번 째 바구니에서 [p] 번 째 바구니까지
모든 바구니의 순서를 반전(뒤집기) 시키기

◆ 해설 1 ◆
팰린드롬을 할 때와 비슷한데,
대칭을 기준으로 바꿔 줘야할 바구니 수가 짝수여도 상관 없고,
홀수인 경우에도 가운데 바구니는 대칭 검증 대상이 아님.
양쪽 끼리 교체하면 되니까.
*/
