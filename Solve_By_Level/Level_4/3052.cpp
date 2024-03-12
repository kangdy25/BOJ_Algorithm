// 나머지 / 브론즈 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int num, count = 0, arr[42] = {0, };
    
    for (int i = 0; i < 10; i++) {
        cin >> num;
        arr[num % 42] = 1;
    }
    for (int i = 0; i < 42; i++) {
        count = arr[i] + count;
    }
    cout << count;
}