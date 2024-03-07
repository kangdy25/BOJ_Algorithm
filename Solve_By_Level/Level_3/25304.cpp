// 영수증 / 브론즈 4

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int total, count, sum = 0;
    cin >> total >> count;
    int price[100], amount[100];
    
    for (int i = 0; i < count; i++) {
        cin >> price[i] >> amount[i];
        sum += (price[i] * amount[i]);
    }

    if (total == sum) cout << "Yes";
    else cout << "No";
}