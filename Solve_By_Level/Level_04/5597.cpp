// 과제 안 내신 분..? / 브론즈 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 

    int check;
    bool student[31] = { 0, };
    
    for (int i = 1; i <= 28; i++) {
        cin >> check;
        student[check] = 1;
    }
    for (int j = 1; j <= 30; j++) {
        if (student[j] == 0) {
            cout << j << "\n";
        }
    }
}