// 나머지

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num;
    int count = 0;
    int arr[42] = {0, };
    
    for (int i = 0; i < 10; i++) {
        cin >> num;
        arr[num % 42] = 1;
    }
    for (int i = 0; i < 42; i++) {
        count = arr[i] + count;
    }
    cout << count;
    
    return 0;
}
