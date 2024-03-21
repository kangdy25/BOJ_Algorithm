// 다이얼 / 브론즈 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int time = 0;
    string S;
    cin >> S;
    
    for (int i = 0; i < S.length(); i++) {
        time += ((int)S[i] - 65) / 3 +3;
        
        if (S[i] == 'S' || 
            S[i] == 'V' || 
            S[i] == 'Y' || 
            S[i] == 'Z') time--;
    }
    cout << time;
}