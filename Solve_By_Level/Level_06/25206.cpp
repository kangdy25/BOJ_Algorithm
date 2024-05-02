// 너의 평점은 / 실버 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string subject, grade;
    double score, total[20] = {}, result = 0.0, scoreSum = 0.0;
    
    for (int i = 0; i < 20; i++) {
        cin >> subject >> score >> grade;
        if (grade[0] == 'F') {
            scoreSum += score;
            total[i] = score * 0.0;
        } else if (grade[0] == 'P') {
            continue;
        } else {
            scoreSum += score;
            if (grade[1] == '+') {
                total[i] = score * (69.0 - (double)grade[0] + 0.5);
            } else if (grade[1] == '0') {
                total[i] = score * (69.0 - (double)grade[0]);
            }
        }
        result += total[i];
    }
    result /= scoreSum;
    
    cout << fixed;
    cout.precision(6);
    
    cout << result;
}