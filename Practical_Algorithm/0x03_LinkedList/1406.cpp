// 에디터 / 실버 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string init;
    cin >> init;
    
    int N;
    cin >> N;
    
    list<char> L;
    for (auto c : init) L.push_back(c);
    auto cursor = L.end();
    
    while(N--) {
        char op;
        cin >> op;
        
        if (op == 'L') {
            if (cursor != L.begin()) cursor--;
        } else if (op == 'P') {
            char letter;
            cin >> letter;
            L.insert(cursor, letter);
        } else if (op == 'D') {
            if (cursor != L.end()) cursor++;
        } else if (op == 'B') {
            if (cursor != L.begin()) {
                cursor--;
                cursor = L.erase(cursor);
            }
        }
    }
    for (auto c : L) cout << c;
}