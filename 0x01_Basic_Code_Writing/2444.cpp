// 별 찍기 - 7
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 1; i <= N-1; i++) {
        for (int j = N-1; j >= i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < 2 * N - 1; i++) {
        cout << "*";
    }
    cout << "\n";
    for (int i = 1; i <= N-1; i++) {
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
        for (int j = 1; j < 2 * (N-i); j++) {
            cout << "*";
        }
        cout << "\n";
    }
}