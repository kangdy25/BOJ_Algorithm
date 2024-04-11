// 두 수의 합

#include <bits/stdc++.h>
using namespace std;

int n, x, s[100005], result = 0;
bool t[2000001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (x - s[i] > 0 && t[x - s[i]]) {
            result++;
        }
        t[s[i]] = true;
    }
    cout << result;
}