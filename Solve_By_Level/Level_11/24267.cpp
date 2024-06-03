// 알고리즘 수업 - 알고리즘의 수행 시간 6 / 브론즈 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long N;
    cin >> N;
    
    cout << (N - 2) * (N - 1) * N / 6 << "\n" << "3";
}