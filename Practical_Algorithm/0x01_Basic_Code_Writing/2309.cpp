// 일곱 난쟁이

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int dwarf[9], sum = 0;

    for (int i = 0; i < 9; i++) {
        cin >> dwarf[i];
        sum += dwarf[i];
    }
    sort(dwarf, dwarf + 9);
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - dwarf[i] - dwarf[j] == 100) {
                for (int k = 0; k < 9; k++) {
                    if (i == k || j == k) continue;
                    cout << dwarf[k] << "\n";
                }
                return 0;
            }
        }
    }

}
