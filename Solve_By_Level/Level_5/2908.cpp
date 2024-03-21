// 상수 / 브론즈 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2, newNum1, newNum2 = 0;
    cin >> num1 >> num2;
    
    int a = num1 / 100;
    int b = (num1 - a*100) / 10;
    int c = (num1 - a*100 - b*10) / 1;
    
    int p = num2 / 100;
    int q = (num2 - p*100) / 10;
    int r = (num2 - p*100 - q*10) / 1;
    
    newNum1 = 100*c + 10*b + a;
    newNum2 = 100*r + 10*q + p;
    
    if (newNum1 > newNum2) {
        cout << newNum1;
    } else if (newNum2 > newNum1) {
        cout << newNum2;
    }
}