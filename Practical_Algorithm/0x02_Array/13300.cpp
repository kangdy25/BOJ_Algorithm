// 방 배정

#include <bits/stdc++.h>
using namespace std;

int student[2][7];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K, room = 0, S, Y;
    cin >> N >> K;

    while(N--) {
        cin >> S >> Y;
        student[S][Y]++;
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j <= 6; j++) {
            if (student[i][j] % K == 0) {
                room += (student[i][j] / K);
            } else {
                room += (student[i][j] / K + 1);
            }
        }   
    }
    
    cout << room << "\n";
}