// 평균은 넘겠지

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int TestCase, N, average, rate;
    double result = 0;
    cin >> TestCase;
    double arr[1000] = {0, };
    
    for (int i = 0; i < TestCase; i++) {
        cin >> N;
        for (int j = 0; j < N; j++) {
            cin >> arr[j];
            average = average + arr[j];
        }
        average = average / N;
        for (int k = 0; k < N; k++) {
            if (arr[k] > average)
                rate++;
        }
        result = (double)rate / N * 100;
        cout << fixed;
        cout.precision(3);
        cout << result << "%" << "\n";
        average = 0;
        rate = 0;
        
    }
    return 0;
}
