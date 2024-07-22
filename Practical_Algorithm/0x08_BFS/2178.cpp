// 미로 팀색 / 실버 1

#include <bits/stdc++.h>
using namespace std;

string arr[102];
int dist[102][102];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M;
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            dist[i][j] = -1;
        }
    }
    
    queue<pair<int, int>> Q;
    dist[0][0] = 0;
    Q.push({0, 0});
    
    while(!Q.empty()) {
        auto cur = Q.front();
        Q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (dist[nx][ny] >= 0 || arr[nx][ny] != '1') continue;
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            Q.push({nx, ny});
        }
    }
    cout << dist[N-1][M-1] + 1;
}