// 코딩은 체육과목입니다. / 브론즈 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, count;
    cin >> N;
    
    count = N % 4 ? (N / 4) + 1 : N / 4;  
    
    for (int i = 0; i < count; i++) {
        cout << "long ";    
    }
    cout << "int";
}