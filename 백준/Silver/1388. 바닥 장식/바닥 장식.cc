#include <iostream>
#include <vector>
using namespace std;

int N, M;								// 편의상 전역 변수로 선언
vector <char> v[51];							// 만약 전역 변수를 안하거든, 함수 호출 때
bool r[51][51] = {};							// DFS (int x, int y, int N, int M) 로 하면 될 것.

void DFS(int x, int y) {						// ◆ DFS를 구현한 방식은 재귀 ◆
	if (r[x][y]) { return; }					// 이미 방문한 위치면 리턴
	r[x][y] = 1;							// 현재 위치를 방문 했음을 표시 

	if (v[x][y] == '-') {
		if (y + 1 < M) {					// 다음 가로 칸이, 지정된 가로 길이를 넘지 않는 다는 가정하에
			if (v[x][y + 1] == '-') { DFS(x, y + 1); }	// 다음 가로 위치 재귀로 호출
		}
	}
	else if (v[x][y] == '|') {
		if (x + 1 < N) {					// 다음 세로 칸이, 지정된 세로 길이를 넘지 않는 다는 가정하에
			if (v[x + 1][y] == '|') { DFS(x + 1, y); }	// 다음 세로 위치 재귀로 호출
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	char c; int L = 0; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> c; v[n].push_back(c);
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (!r[n][m]) { r[n][m] = 1; L++; }				// 한번도 방문하지 않은 노드의 위치라면 (x축, y축)
			else { continue; }						// 혹여 방문한 곳을 재방문 했다면, 넘어가기

			if (v[n][m] == '-') {						// 현 위치가 ' - ' 인 경우
				if (m + 1 < M) {					// 다음 가로 칸이, 지정된 가로 길이를 넘지 않는 다는 가정하에
					if (v[n][m + 1] == '-') { DFS(n, m + 1); }
				}
			}
			else if (v[n][m] == '|') {					// 현 위치가 ' | ' 인 경우
				if (n + 1 < N) {					// 다음 세로 칸이, 지정된 세로 길이를 넘지 않는 다는 가정하에
					if (v[n + 1][m] == '|') { DFS(n + 1, m); }
				}
			}
		}
	}
	cout << L;
	return 0;
}
/* ■ 설명 ■
그래프 이론 (DFS, 깊이 우선 탐색) 을 사용 하였으며

사실 그래프 이론을 사용한다 해서 지레짐작으로 겁 먹어서 그렇지
실상, 2차원 배열을 계속 탐색 하면서 특정 조건에 따라
' - ' or ' | ' 패턴이 이어지냐, 아니냐를 검증하는 것이기에

한번 감 잡으면 그렇게 어렵지 않을 것이다.
================================================================
■ 오답 원인 ■
코드 줄 39, 44번 째에
[if (m + 1 < M)], [if (n + 1 < N)] 이 부분 조건문을 잘못 기입함

■ 예시 ■
[if (m + 1 < N)], [if (n + 1 < M)]
이런 자잘한 실수는 잘 보면서 코딩할 것.
================================================================
그 외 vector 2차원 배열 입력 방법도
그냥 2차원 배열의 입력 방법과 마찬가지 이므로
잘 신경 써서 하면 된다.
*/
