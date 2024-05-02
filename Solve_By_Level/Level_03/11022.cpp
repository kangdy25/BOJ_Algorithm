// A + B - 8 / 브론즈 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int test, A, B;
    cin >> test;

    for (int i = 1; i <= test; i++) {
        cin >> A >> B;
        cout << "Case #" << i << ": " << A << " + " << B << " = " << A+B << "\n";
    }
}