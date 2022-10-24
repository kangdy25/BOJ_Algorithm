// 숫자의 합

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cin.tie(NULL);
    int N;
    char num;
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> num;
        sum = sum + (num - 48);
    }
    cout << sum << "\n";
    
    return 0;
}
