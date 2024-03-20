// 숫자의 합 / 브론즈 4

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    
    char num;
    int N, sum = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num;
        sum += (num - 48);
    }
    cout << sum << "\n";
}