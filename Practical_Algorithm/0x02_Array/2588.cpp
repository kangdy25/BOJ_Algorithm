// 숫자의 개수

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x, d[10] = {};
    cin >> a >> b >> c;
    x = a * b * c;
    while(x > 0) {
        d[x%10]++;
        x/=10;
    }
    for (int i = 0; i < 10; i++) {
        cout << d[i] << "\n";
    }
}