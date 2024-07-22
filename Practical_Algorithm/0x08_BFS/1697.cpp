// 숨바꼭질 / 실버 1

#include <bits/stdc++.h>
using namespace std;

int dist[100002];
int dx[3] = { -1, 1, 2 };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 100002; i++) {
        dist[i] = -1;
    }

    int N, K;
    cin >> N >> K;
    queue<int> Q;
    Q.push(N);
    dist[N] = 0;


    while (dist[K] == -1) {
        int cur = Q.front();
        Q.pop();

        for (int nx : {cur - 1, cur + 1, 2 * cur}) {
            
            if (nx < 0 || nx > 100000) continue;
            if (dist[nx] != -1) continue;
            dist[nx] = dist[cur] + 1;
            Q.push(nx);
        }
    }
    cout << dist[K];
}