// 알람 시계

#include <iostream>

using namespace std;

int main() {
    int hour, minute;
    cin >> hour;
    cin >> minute;
    
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
    cout << hour << " " << minute << endl;
    
    return 0;
}
