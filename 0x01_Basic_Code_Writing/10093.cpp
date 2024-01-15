// 숫자

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long A, B;
    cin >> A >> B;
    
    if (A > B) swap(A, B);
    if (B > A) {
        cout << B - A - 1 << "\n";
        for (long long i = 1; i <= B - A - 1; i++) {
        cout << A + i << " ";
        }    
    } else {
        cout << 0;
    }
}