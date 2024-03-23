// 크로아티아 알파벳 / 실버 5

#include <bits/stdc++.h>
using namespace std;

int count(string str) {
    string alphabet[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    for (int i = 0; i < 8; i++) {
        while(1)
            if (str.find(alphabet[i]) != -1) {
                str.replace(str.find(alphabet[i]), alphabet[i].length(), "#");
            } else {
                break;
            }
        }
    return str.length();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    
    cout << count(s);
}