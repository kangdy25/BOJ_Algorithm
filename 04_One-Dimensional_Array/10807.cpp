// 개수 세기

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N, V;
    int count = 0;
    cin >> N;
    int arr[100] = { 0, };
    for (int i = 0; i < N; i++) {
        cin >> arr[i];   
    }
    cin >> V;
    for (int j = 0; j < N; j++) {
        if (arr[j] == V) {
            count++;
        }
    }
    cout << count;
    
    return 0;
}
