// OX 퀴즈 

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int line;
    int sum = 0, score = 0;
    char arr[80];
    cin >> line;
    
    for (int i = 0; i < line; i++) {
        cin >> arr;
        for (int j = 0; j < strlen(arr); j++) {
            if (arr[j] == 'O') {
                sum++;
                score += sum;
            }
            else 
                sum = 0;
        }
        cout << score << "\n";
        sum = 0;
        score = 0;
    }
     
    return 0;
}
