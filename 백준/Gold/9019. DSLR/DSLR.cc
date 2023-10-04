#include <iostream>
#include <vector>
#include <queue>
using namespace std;

char f[] = { 'D','S','L','R' };
short A, B, T, W[4];

void V() {
    vector <bool> v(10000, 1);
    queue <pair<short, string>> q;
    q.push({ A,"" }); v[A] = 0;
    while (!q.empty()) {
        short n = q.front().first; string s = q.front().second; q.pop();
        if (n == B) { cout << s << '\n'; return; }
        W[0] = (n * 2) % 10000;
        W[1] = (n > 0) ? (n - 1) : 9999;
        W[2] = ((n % 1000) * 10) + (n / 1000);
        W[3] = ((n % 10) * 1000) + (n / 10);
        for (int m = 0; m < 4; m++) {
            int N = W[m];
            if (v[N]) { v[N] = 0; q.push({ N,s + f[m] }); }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin >> T;
    for (int n = 0; n < T; n++) { cin >> A >> B; V(); }
    return 0;
}