// 홀수
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x;
    int odd = 0, sum = 0, min = 100;
    
    for (int i = 0; i < 7; i++) {
        cin >> x;
        if (x % 2 == 1) {
            odd += 1;
            sum += x;
            
            if (x < min) {
                min = x;
            }
        }
    }
    if (odd) cout << sum << "\n" << min;
    else cout << "-1";
}