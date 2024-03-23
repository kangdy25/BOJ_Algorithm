// 단어 공부 / 브론즈 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    int arr[26] = {};
    int maxVal = 0, maxIdx = 0, cnt = 0;
    
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
        arr[(int)s[i] - 65]++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (maxVal < arr[i]) {
            maxVal = arr[i];
            maxIdx = i;
        } 
    }
    for (int i = 0; i < 26; i++) {
        if (maxVal == arr[i]) {
            cnt++;
        }
    }

    if (cnt > 1) cout << "?";
    else cout << (char)(maxIdx + 65);
}