#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int s(int N, int K, vector <int> w, vector <int> v) {
	int Ws, Vs;
	vector<vector<int>> DP(N + 1, vector<int>(K + 1, 0));
	for (int n = 1; n <= N; n++) {
		Ws = w[n - 1]; Vs = v[n - 1];
		for (int m = 1; m <= K; m++) {
			if (m < Ws) { DP[n][m] = DP[n - 1][m]; }
			else { DP[n][m] = max(DP[n - 1][m], DP[n - 1][m - Ws] + Vs); }
		}
	}
	return DP[N][K];
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
	int N, K, W, V; cin >> N >> K;
	vector<int> w(N), v(N);
	for (int n = 0; n < N; n++) {
		cin >> W >> V;
		w[n] = W; v[n] = V;
	}
	cout << s(N, K, w, v);
	return 0;
}