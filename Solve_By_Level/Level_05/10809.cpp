// 알파벳 찾기 / 브론즈 2

#include <iostream>
#include <string>

using namespace std;
    
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;

    for(int i = 0; i < alphabet.length(); i++)
        cout << (int)s.find(alphabet[i]) << " ";
}