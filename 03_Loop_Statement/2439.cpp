// 별 찍기 - 2

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int line = 0;
    cin >> line;
    for (int i = 1; i <= line; i++) {
        for (int j = 1; j <= line - i; j++) {
        cout << " ";
        }  
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
