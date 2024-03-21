// 문자열 반복 / 브론즈 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T, R;
    string S;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> R >> S;
        for (int j = 0; j < S.length(); j++) {
            for (int k = 0; k < R; k++) {
                cout << S[j];
            }
        }
        cout << "\n";
    }
}