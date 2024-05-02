// 평균 / 브론즈 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    
    int subject;
    double score[1000];
    double sum = 0;
    
    cin >> subject;
    for (int i = 0; i < subject; i++) {
        cin >> score[i];
    }
    
    sort(score, score + subject);
    
    for (int i = 0; i < subject; i++) {
        sum = sum + (score[i] / score[subject - 1]) * 100;
    }
    cout << sum / subject;
}