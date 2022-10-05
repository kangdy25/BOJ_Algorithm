// 평균

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
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
    
    return 0;
}
