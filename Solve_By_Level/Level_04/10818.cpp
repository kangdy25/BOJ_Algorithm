// 최소, 최대 / 브론즈 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    
    int MaxValue = -1000001;
    int MinValue = 1000001;
    int N, InputValue;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> InputValue;
        if (InputValue > MaxValue) {
            MaxValue = InputValue;
        }
        if (InputValue < MinValue) {
            MinValue = InputValue;
        }
    }
    
    cout << MinValue << " " << MaxValue << "\n";
}