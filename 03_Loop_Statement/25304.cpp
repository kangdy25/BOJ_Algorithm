// 영수증

#include <iostream>

using namespace std;

int main() {
    int total, count, sum = 0;
    cin >> total >> count;
    int price[100], amount[100];
    
    for (int i = 0; i < count; i++) {
        cin >> price[i] >> amount[i];
        sum = sum + (price[i] * amount[i]);
    }
    if (total == sum) cout << "Yes";
    else cout << "No";
    
    return 0;
}
