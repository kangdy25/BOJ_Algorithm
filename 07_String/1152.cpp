// 단어의 개수

#include <iostream>
#include<string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
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
    return 0;
}
