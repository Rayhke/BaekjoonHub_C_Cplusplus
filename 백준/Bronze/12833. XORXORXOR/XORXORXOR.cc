#include <iostream>
using namespace std;

inline int s(int a, int b) { return a ^ b; }

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a, b, c; cin >> a >> b >> c;
    if (c & 1) { cout << s(a, b); }
    else { cout << a; }
    return 0;
}
/* ■ 설명 ■
비트 마스킹의 알고리즘에 온 것을 환영하며,

[연산자] / [기능]
    &   : 비트 단위로 ' AND ' 연산
    |   : 비트 단위로 ' OR ' 연산
    ^   : 비트 단위로 ' XOR ' 연산
    ~   : 단항 연산자이며, 피연산자의 모든 비트를 반전 (뒤집다.)
    <<  : 피연산자의 모든 비트 열을 왼쪽으로 이동
    >>  : 피연산자의 모든 비트 열을 오른쪽으로 이동
===================================================================
그렇다면 왜 굳이 홀수 짝수에 따라 비트 마스킹 연산을 하였느냐.
' XOR ' 를 2번 뒤집으면 원래의 수로 돌아오기 때문에

[c]의 입력 값 만큼 반복하는 것 보단, 그 값이 홀수냐 짝수냐에 따라
한번 연산만 해주면 되기 때문이다.
*/
