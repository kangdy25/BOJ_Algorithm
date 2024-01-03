// 윷놀이

#include <bits/stdc++.h>
using namespace std;

int result, input;
string res = "DCBAE";

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for (int j = 0; j < 3; j++) {
        result = 0;
        for (int i = 0; i < 4; i++) {
            cin >> input;
            result += input;
        }
        cout << res[result] << "\n";
    }
}
