// 구구단 / 브론즈 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    for (int j = 1; j <= 9; j++) {
        cout << n << " * " << j << " = " << n * j << "\n";          
    }
}