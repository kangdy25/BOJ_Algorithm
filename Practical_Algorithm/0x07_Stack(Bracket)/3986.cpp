// 좋은 단어 / 실버 4

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, cnt = 0;
    cin >> N;
    string s;

    while (N--) {
        stack<char> st;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                if (!st.empty() && st.top() == 'A') {
                    st.pop();
                }
                else {
                    st.push(s[i]);
                }
            }
            else if (s[i] == 'B') {
                if (!st.empty() && st.top() == 'B') {
                    st.pop();
                }
                else {
                    st.push(s[i]);
                }
            }
        }
        if (st.empty()) {
            cnt++;
        }
    }
    cout << cnt;
}