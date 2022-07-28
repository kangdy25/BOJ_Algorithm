// 오븐 시계

#include <iostream>

using namespace std;

int main() {
    int hour, min, cook;
    cin >> hour >> min >> cook;
    
    int HourToMin = 60 * hour + min;
    HourToMin = HourToMin + cook;
    
    int NewHour = (HourToMin / 60) % 24;
    int NewMin = HourToMin % 60;
    
    cout << NewHour << " " << NewMin << endl;
    
    return 0;
}
