// Strfry

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    
    while(N--) {
        int check[26] = {0, };
        bool checking = true;
        
        string s1, s2;
        cin >> s1 >> s2;
        
        for (auto c : s1) check[c - 'a']++;
        for (auto c : s2) check[c - 'a']--;
        
        for (int i : check) {
            if (i != 0) checking = false;
        }
        
        if (checking) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}