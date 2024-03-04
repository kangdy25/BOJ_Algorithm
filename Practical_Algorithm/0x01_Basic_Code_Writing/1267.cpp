// 핸드폰 요금

#include <bits/stdc++.h>
using namespace std;

int callTime[10000], Y = 0, M = 0;

int main() {
    int N;
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> callTime[i];
        Y += 10 * (callTime[i] / 30 + 1);
        M += 15 * (callTime[i] / 60 + 1);
    }
    if (Y > M) {
        cout << "M " << M;
    } else if (Y < M) {
        cout << "Y " << Y;
    } else {
        cout << "Y M " << Y;
    }
}