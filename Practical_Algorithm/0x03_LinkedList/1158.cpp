// 요세푸스 문제 / 실버 4

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K;
    cin >> N >> K;
    
    list<int> L = {};
    
    // N까지 숫자를 리스트에 채우기
    for (int i = 1; i <= N; i++) {
        L.push_back(i);
    }
    
    list<int>::iterator t = L.begin();
    cout << "<";
    
    while(L.size()) {
        for (int i = 1; i < K; i++) {
            if (++t == L.end()) {
                t = L.begin();
                continue;
            }
        }
        if (L.size() == 1) cout << *t;
        else cout << *t << ", ";
        
        t = L.erase(t);
        t = (t == L.end()) ? L.begin() : t;
    }
    cout << ">";
}