// AC / 골드 5
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, n;
    string p, num;
    cin >> T;

    while (T--) {
        bool dir = true; // 왼쪽부터 시작
        bool err = false;
        deque<int> dq;
        cin >> p;
        cin >> n;
        cin >> num;
        string s = "";
        for (int i = 0; i < num.length(); i++) {

            if (isdigit(num[i])) {
                s += num[i];

            }
            else {
                if (!s.empty()) {
                    dq.push_back(stoi(s));
                    s = "";
                }
            }
        }

        for (int i = 0; i < p.length(); i++) {
            if (p[i] == 'R') {
                if (dir == true) {
                    dir = false;
                }
                else {
                    dir = true;
                }
            }
            else {
                if (dq.empty()) {
                    cout << "error\n";
                    err = true;
                    break;
                }
                else {
                    if (dir == true) {
                        dq.pop_front();
                    }
                    else {
                        dq.pop_back();
                    }
                }
            }
        }
        if (!err) {
            cout << "[";
            if (dir) {
                for (int i = 0; i < dq.size(); i++) {
                    if (i == dq.size() - 1) {
                        cout << dq[i];
                    }
                    else {
                        cout << dq[i] << ",";
                    }
                }
            }
            else {
                for (int i = dq.size() - 1; i >= 0; i--) {
                    if (i == 0) {
                        cout << dq[i];
                    }
                    else {
                        cout << dq[i] << ",";
                    }
                }
            }
            cout << "]\n";
        }
    }
}