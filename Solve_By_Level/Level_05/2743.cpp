// 단어 길이 재기 / 브론즈 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    string str;
    cin >> str;
    int length = 0;

    for (int i = 0; i <= 100; i++) {
        if (str[i] == '\0') {
            length = i;
            break;
        }
    }
    cout << length << "\n";
}