// 최댓값

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[9] = {0,};
    int MaxValue = 0;
    int count = 0;
    
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        if (MaxValue < arr[i]) {
            MaxValue = arr[i];
            count = i + 1;
        }
    }
    cout << MaxValue << "\n" << count << "\n";
    
    return 0;
}

