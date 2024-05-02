// 세탁소 사장 동혁 / 브론즈 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T, C, Q, D, N, P;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        cin >> C;
        Q = 0, D = 0, N = 0, P = 0;
        while (C) {
            if (C >= 25) {
                Q++;
                C -= 25;
            } else if (C >= 10) {
                D++;
                C -= 10;
            } else if (C >= 5) {
                N++;
                C -= 5;
            } else if (C >= 1) {
                P++;
                C -= 1;
            }
        }
        cout << Q << " " << D << " "<< N << " " << P << "\n";
    }
}