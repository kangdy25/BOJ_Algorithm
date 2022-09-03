// A + B - 8

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int test, A, B = 0;
    cin >> test;
    for (int i = 0; i < test; i++) {
        cin >> A >> B;
        cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A+B << "\n";
    }
    
    return 0;
}
