// 개수 세기 / 브론즈 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, arr[102], V, same = 0;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cin >> V;
    for (int i = 0; i < N; i++) {
        if (arr[i] == V) {
            same++;
        }
    }
    cout << same;
}