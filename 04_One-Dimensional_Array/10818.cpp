// 최소, 최대

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N = 0;
    cin >> N;
    int arr[1000001];
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + N);
    cout << arr[0] << " " << arr[N - 1] << "\n";
    
    return 0;
}
