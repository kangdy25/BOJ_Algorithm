// 색종이

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[100][100] = {0, };
    int count, x, y, area = 0;
    cin >> count;
    
    while(count--) {
        cin >> x >> y;
        for(int i = y; i < y+10; i++) {
            for (int j = x; j < x+10; j++) {
                if (!arr[i][j]) {
                    area++;
                    arr[i][j] = 1;
                }
            }
        }
    }
    cout << area;
    return 0;
}
