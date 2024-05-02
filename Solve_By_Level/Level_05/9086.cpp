// 문자열 / 브론즈 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int test;
    string str;
    cin >> test;
    
    for (int i = 0; i < test; i++) {
        cin >> str;
        for(int j = 0; j < str.length() + 1; j++) {
            if (str[j] == '\0') {
                cout << str[0] << str[j-1] << "\n";
            }
        }
    }
}