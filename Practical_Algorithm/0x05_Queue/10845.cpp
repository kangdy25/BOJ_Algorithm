// 큐 / 실버 4

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    queue<int> q;
    int N;
    string cmd;
    cin >> N;
    
    while (N--) {
        cin >> cmd;
        if (cmd == "push") {
            int x;
            cin >> x;
            q.push(x);
        } else if (cmd == "pop") {
            if (q.size()) {
                cout << q.front() << "\n";
                q.pop();
            } else {
                cout << "-1\n";
            }
        } else if (cmd == "size") {
            cout << q.size() << "\n";
        } else if (cmd == "front") {
            if (q.size()) {
                cout << q.front() << "\n";
            } else {
                cout << "-1\n";
            }
        } else if (cmd == "back") {
            if (q.size()) {
                cout << q.back() << "\n";
            } else {
                cout << "-1\n";
            }
        } else if (cmd == "empty") {
            if (q.size()) {
                cout << "0\n";
            } else {
                cout << "1\n";
            }
        }
    }
}