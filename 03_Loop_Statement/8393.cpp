// 합

// ========== 첫 번째 풀이 ==========
#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << sum << endl;
    
    return 0;    
}

// ========== 두 번째 풀이 ==========

/*
#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    cout << n * (n+1) / 2 << endl;
    
    return 0;
}
*/
