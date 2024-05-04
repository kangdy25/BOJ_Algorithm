// 회전하는 큐 / 실버 3
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, x;
    cin >> N;
    deque<int> dq;
    string s;
    
    while(N--) {
        cin >> s;
        if (s == "push_front") {
            cin >> x;
            dq.push_front(x);
        } else if (s == "push_back") {
            cin >> x;
            dq.push_back(x);
        } else if (s == "pop_front") {
            if (dq.empty()) {
                cout << "-1\n";
            } else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        } else if (s == "pop_back") {
            if (dq.empty()) {
                cout << "-1\n";
            } else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        } else if (s == "size") {
            cout << dq.size() << "\n";
        } else if (s == "empty") {
            if (dq.empty()) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        } else if (s == "front") {
            if (dq.empty()) {
                cout << "-1\n";
            } else {
                cout << dq.front() << "\n";
            }
        } else if (s == "back") {
            if (dq.empty()) {
                cout << "-1\n";
            } else {
                cout << dq.back() << "\n";
            }
        }
    }
}