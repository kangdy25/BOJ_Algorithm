// 스택 / 실버 4

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, num;
    string s;
    cin >> N;
    stack<int> st;
    
    for (int i = 0; i < N; i++) {
        cin >> s;
        if (s == "push") {
            cin >> num;
            st.push(num);
        } else if (s == "pop") {
            if (st.empty()) {
                cout << "-1" << "\n";
            } else {
                cout << st.top() << "\n";
                st.pop(); 
            }
        } else if (s == "top") {
            if (st.empty()) {
                cout << "-1" << "\n";
            } else {
                cout << st.top() << "\n";
            }
        } else if (s == "size") {
            cout << st.size() << "\n";
        } else if (s == "empty") {
            if (st.empty()) {
                cout << "1" << "\n";
            } else {
                cout << "0" << "\n";
            }
        }
    }
}