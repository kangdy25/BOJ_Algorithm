// 쇠막대기 / 실버 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ans = 0;
    string s;
    cin >> s;
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' && s[i + 1] == ')') {
            ans += st.size();
        }
        else if (s[i] == '(') {
            st.push(s[i]);
        }
        else if (!st.empty() && s[i] == ')' && s[i - 1] != '(') {
            st.pop();
            ans++;
        }
    }
    cout << ans << "\n";
}