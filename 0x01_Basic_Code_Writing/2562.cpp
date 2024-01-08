// 최댓값
#include <bits/stdc++.h>
using namespace std;

int num, numMax, numIndex = 0;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for (int i = 0; i < 9; i++) {
        cin >> num;
        if (numMax < num) {
            numMax = num;
            numIndex = i;
        }
    }
    cout << numMax << "\n" << numIndex + 1;
}