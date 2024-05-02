// 단어의 개수 / 브론즈 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    
    string str;
    getline(cin, str);
    
    int word = 1;
    int len = str.length();
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            word++;
        }
    }
    if (str[0] == ' ') word--;
    if (str[len - 1] == ' ') word--;
    
    cout << word;
}