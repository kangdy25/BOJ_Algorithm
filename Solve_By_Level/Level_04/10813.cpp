// 공 바꾸기 / 브론즈 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M, a, b, arr[101] = {};
    
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }
    
    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        swap(arr[a-1], arr[b-1]);
    }
    
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}