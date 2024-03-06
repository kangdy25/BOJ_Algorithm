// 알람 시계 / 브론즈 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int hour, minute;
    cin >> hour >> minute;
    
    if (minute < 45) {
        if (hour == 0) {
            hour = 23;
            minute = 60 -(45 - minute);
        }
        else {
            hour--;
            minute = 60 -(45 - minute);
        }
        
    } else {
        minute -= 45;
    }
    cout << hour << " " << minute << "\n";
}