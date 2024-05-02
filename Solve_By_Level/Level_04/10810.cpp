// 공 넣기 / 브론즈 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M, i, j, k, arr[102] = {};
    cin >> N >> M;
    
    for (int a = 0; a < M; a++){
        cin >> i >> j >> k;
        for (int b = i; b <= j; b++) {
            arr[b] = k;
        }
    }
    for (int i = 1; i <= N; i++) {
        cout << arr[i] << " ";
    }
}