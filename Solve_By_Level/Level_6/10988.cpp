// 팰린드롬인지 확인하기 / 브론즈 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    int l = s.length();
    
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - 1 - i]) {
            cout << "0";
            return 0;
        } 
    }
    cout << "1";
}