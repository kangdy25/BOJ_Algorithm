// 진법 변환 2 / 브론즈 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, B, remainder = 0;
    string num = "";
    cin >> N >> B;
    
    while(N > 0) {
        remainder = N % B;
        if (remainder >= 10) {
            num.push_back((char)(remainder + 'A' - 10));
        } else {
            num.push_back((char)('0' + remainder));
        }
        N = N / B;
    }
    
    reverse(num.begin(), num.end());
    cout << num << "\n";
}