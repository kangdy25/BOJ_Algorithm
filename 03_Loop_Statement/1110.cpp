// 더하기 사이클

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N, NewN, cycle = 0;
    cin >> N;
    int firstN = N;
    while (1) {
        NewN = (N % 10) * 10 + (N / 10 + N % 10) % 10;
        cycle++;
        N = NewN;
        if (firstN == N)
            break;
    }
    cout << cycle << "\n";
    
    return 0;
}
