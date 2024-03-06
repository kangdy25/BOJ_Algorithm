// 오븐 시계 / 브론즈 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int hour, min, cook;
    cin >> hour >> min >> cook;
    
    int HourToMin = 60 * hour + min;
    HourToMin = HourToMin + cook;
    
    int NewHour = (HourToMin / 60) % 24;
    int NewMin = HourToMin % 60;
    
    cout << NewHour << " " << NewMin << "\n";
}