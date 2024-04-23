// 키로거 / 실버 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    
    while(N--) {
        string s;
        cin >> s;
        
        list<char> str = {};
        list<char>::iterator p = str.begin();
        
        for (auto c : s) {
            if (c == '<') {
                if (p != str.begin()) p--;
            } else if (c == '>') {
                if (p != str.end()) p++;
            } else if (c == '-') {
                if (p != str.begin()) {
                    p--;
                    p = str.erase(p);
                }
            } else {
                str.insert(p, c);
            }
        }
        for (auto c : str) cout << c;
        cout << "\n";
    }
}