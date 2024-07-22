// 토마토 / 골드 5

#include <bits/stdc++.h>
using namespace std;

int arr[1002][1002];
int dist[1002][1002];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M;
    cin >> N >> M;
    queue<pair<int, int>> Q;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                Q.push({i, j});
            } 
            if (arr[i][j] == 0) {
                dist[i][j] = -1;
            }
        }
    }
    
    while(!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            
            if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
            if (dist[nx][ny] >= 0) continue;
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            Q.push({nx, ny});
        }
    }
    
    int ans = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (dist[i][j] == -1) {
                cout << "-1";
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans;
}