// 그룹 단어 체커 / 실버 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, check;
    cin >> N;
    check = N;
    string s;
    
    for (int i = 0; i < N; i++) {
        int arr[26] = {};
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            if (arr[(int)s[j] - 97] == 0) {
                arr[(int)s[j] - 97]++;
            } else {
                if (s[j - 1] == s[j]) {
                    continue;
                } else {
                    check--;
                    break;
                }
            }
        }
        
    }
    cout << check;
}