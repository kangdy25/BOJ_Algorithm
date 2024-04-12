// 세로 읽기 / 브론즈 1

#include <bits/stdc++.h>
using namespace std;

char arr[5][16];

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    } 
    
    for (int p = 0; p < 15; p++) {
        for (int q = 0 ; q < 5; q++) {
            if (arr[q][p] != '\0') {    
                cout << arr[q][p];
            }
        }
    }
}
