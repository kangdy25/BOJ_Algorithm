// 진법 변환 / 브론즈 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string N;
    int B, power, sum = 0;
    
    cin >> N >> B;
    
    int l = N.length() - 1;
    
    for(int i = 0; i < N.length(); i++) {
        power = 1;
        for (int j = 0; j < l-i; j++) {
            power *= B;
        }
        if (N[i] >= 'A') {
            sum += (power * ((N[i] - 'A' + 10)));
        } else {
            sum += (power * (N[i] - '0'));
        }
    }
    cout << sum;
}