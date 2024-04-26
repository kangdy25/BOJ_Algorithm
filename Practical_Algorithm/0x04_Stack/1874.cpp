// 스택 수열 / 실버 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, cnt = 1;
    cin >> N;
    stack<int> S;
    string ans;
    
    for (int i = 0; i < N; i++) {
        int t;
        cin >> t;
        while (cnt <= t) {
            S.push(cnt++);
            ans += "+\n";
        }
        if (S.top() != t) {
            cout << "NO\n";
            return 0;
        }
        S.pop();
        ans += "-\n";
    }
    cout << ans;
}