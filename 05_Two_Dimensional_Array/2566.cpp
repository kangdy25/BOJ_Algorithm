// 최댓값

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[9][9];
    int count = 0, row = 0, column = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
            if (arr[i][j] >= count) {
                count = arr[i][j];
                row = i + 1;
                column = j + 1;
            }
        }
    }    
    cout << count << "\n" << row << " " << column;
    
    return 0;
}
