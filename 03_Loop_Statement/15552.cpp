#include <iostream> 

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int testcase, a, b = 0;
    cin >> testcase;
    for (int i = 0; i < testcase; i++) {
        cin >> a >> b;
        cout << a + b << "\n";
    }
    
    return 0;
}
