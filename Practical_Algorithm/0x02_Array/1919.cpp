// 애너그램 만들기

#include <bits/stdc++.h>
using namespace std;

int arr1[26], arr2[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    int count, result = 0;
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++) {
        arr1[a[i] - 'a']++;
    }
    for (int i = 0; i < b.length(); i++) {
        arr2[b[i] - 'a']++;
    }

        
    for (int i = 0; i < 26; i++) {
        if (arr1[i] != arr2[i]) {
            result += abs((arr1[i] - arr2[i]));
        }
    }

    cout << result << "\n";
}