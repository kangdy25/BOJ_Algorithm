// 셀프 넘버

#include <iostream>

using namespace std;

int SelfNum(int Number) {
    int sum = Number;
    
    while (Number != 0) {
        sum = sum + (Number % 10);
        Number = Number / 10;
    }
    return sum;
}

int main() {
    bool check[10001] = { false, };
    for (int i = 1; i <= 10000; i++) {
        int n = SelfNum(i);
        if (n < 10001) {
            check[n] = true;
        }
    }
    
    for (int j = 1; j <= 10000; j++) {
        if (!check[j]) {
            cout << j << "\n";
        }
    }
    return 0;
}
