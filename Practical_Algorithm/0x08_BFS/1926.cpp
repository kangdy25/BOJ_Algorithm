// 그림 / 실버 1

#include <bits/stdc++.h>
using namespace std;

int arr[502][502];
bool vis[502][502];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, mx = 0, cnt = 0, area;
    cin >> x >> y;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> arr[i][j];
        }
    }

    for (int a = 0; a < x; a++) {
        for (int b = 0; b < y; b++) {
            if (arr[a][b] == 0 || vis[a][b]) continue;
            cnt++;

            queue<pair<int, int>> qp;
            vis[a][b] = 1;
            qp.push({ a, b });
            area = 0;

            while (!qp.empty()) {
                area++;
                pair<int, int> cur = qp.front();
                qp.pop();

                for (int i = 0; i < 4; i++) {
                    int nx = cur.first + dx[i];
                    int ny = cur.second + dy[i];

                    if (nx < 0 || nx >= x || ny < 0 || ny >= y) continue;
                    if (vis[nx][ny] || arr[nx][ny] != 1) continue;
                    vis[nx][ny] = 1;
                    qp.push({ nx, ny });
                }
            }
            mx = max(mx, area);
        }
    }
    cout << cnt << "\n" << mx;
}