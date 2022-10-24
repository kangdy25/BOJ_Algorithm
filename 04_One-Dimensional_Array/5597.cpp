// 과제 안 내신 분..?

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int check;
    bool student[31] = { 0, };
    
    for (int i = 1; i <= 28; i++) {
        cin >> check;
        student[check] = 1;
    }
    for (int j = 1; j <= 30; j++) {
        if (student[j] == 0) {
            cout << j << "\n";
        }
    }
    
    return 0;
}
