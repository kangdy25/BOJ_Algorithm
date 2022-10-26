// 한수

#include <iostream>

using namespace std;

int ass(int num) {
    int hansoo = 0;
    
    if (num < 100) {
        return num;
    }
    else {
        hansoo = 99;
        for (int i = 100; i <= num; i++) {
            int hun = i / 100;
            int ten = (i / 10) % 10;
            int one = i % 10;
        
            if (hun - ten == ten - one) {
                hansoo++;
            }
        }
    }
    return hansoo;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cin.tie(NULL);
    int num;
    cin >> num;
    int result = ass(num);
    cout << result << "\n"; 
    
    return 0;
}
