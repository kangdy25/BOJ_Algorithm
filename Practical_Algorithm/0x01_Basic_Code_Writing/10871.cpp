// X보다 작은 수

#include <bits/stdc++.h>
using namespace std;

int n, x, a[10004];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < x) {
            cout << a[i] << ' ';
        }
    }
}