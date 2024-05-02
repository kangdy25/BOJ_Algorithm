// 킹, 퀸, 룩, 비숍, 나이트, 폰 / 브론즈 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int chess[6], count[6] = {1, 1, 2, 2, 2, 8};
    
    for(int i = 0; i < 6; i++) {
        cin >> chess[i];
        cout << count[i] - chess[i] << " ";
    }
}