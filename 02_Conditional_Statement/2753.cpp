// 윤년

#include <iostream>

using namespace std;

int main() {
    int yoonyear;
    int isit;
    cin >> yoonyear;

    if (yoonyear % 400 == 0) isit = 1;
    else if(yoonyear % 100 == 0) isit = 0;
    else if(yoonyear % 4 == 0) isit = 1;
    else isit = 0;

    cout << isit;

    return 0;
}
