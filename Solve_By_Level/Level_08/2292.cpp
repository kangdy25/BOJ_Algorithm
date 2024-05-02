// 벌집 / 브론즈 2

#include <bits/stdc++.h>
using namespace std;
// 1:08
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    int i = 1;
    
    for (int sum = 2; sum <= N; i++) {
        sum += 6 * i;
    }
    if (N == 1) i = 1;
    cout << i;
}