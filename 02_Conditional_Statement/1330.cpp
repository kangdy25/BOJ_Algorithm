// 두 수 비교하기

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    if (a > b) {
        cout << ">" << endl;
    }
    else if (a < b){
        cout << "<" << endl;
    } else {
        cout << "==" << endl;
    }

    return 0;
}
