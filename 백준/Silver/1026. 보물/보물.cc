#include <iostream>
#include <algorithm>	// sort 
using namespace std;

inline int p(int a[], int b[], int n) { return a[n] * b[n]; }

int main() {
	int a[50] = {}, b[50] = {}, N, S = 0;
	cin >> N;
	for (int n = 0; n < N; n++) { cin >> a[n]; }
	for (int n = 0; n < N; n++) { cin >> b[n]; }
	sort(a, a + N); sort(b, b + N, greater<>());	// greater 오름차순으로 정렬
	for (int n = 0; n < N; n++) { S = S + p(a, b, n); }
	cout << S;
	return 0;
}
/* ■ 설명 ■
배열 [a] 와 [b] 의 원소를 각각 하나 씩, 한 쌍으로 이어서		// S = a[0] × b[0] + ... + a[N - 1] × b[N - 1]
곱한 값을 모두 더 할 때, 최솟값이 나오도록 한다.

가장 간단한 방법은 큰 값과 작은 값 끼리 곱하는 순서대로 하면 된다.

예시로 배열 원소가
(a : 1 5 2 4 3 / b : 1 2 3 4 5) 순으로 주어 졌다면
(1 × 1) + (5 × 2) + (2 × 3) + (4 × 4) + (3 × 5) = 48 이지만,

(a : 5 4 3 2 1 / b : 1 2 3 4 5) 순으로 한다면?
(5 × 1) + (4 × 2) + (3 × 3) + (2 × 4) + (1 × 5) = 35 간단하다.
==============================================================
[b] 배열의 순서를 건들이지 않고, [a] 배열의 순서만 조작하여
맞추는 것은 비효율적이라 판단 되어 편의상 둘다 정렬 하였으나
출제자의 의도와는 다른 듯 하다.
*/
