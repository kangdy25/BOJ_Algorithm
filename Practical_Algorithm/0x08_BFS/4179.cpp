// 불! / 골드 3

#include <bits/stdc++.h>
using namespace std;

int fire[1002][1002];
int jihun[1002][1002];
string maze[1002];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int>> fireQ;
    queue<pair<int, int>> jihunQ;

    int R, C;
    cin >> R >> C;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            jihun[i][j] = -1;
            fire[i][j] = -1;
        }
    }

    for (int i = 0; i < R; i++) {
        cin >> maze[i];
        for (int j = 0; j < C; j++) {
            if (maze[i][j] == 'J') {
                jihunQ.push({ i, j });
                jihun[i][j] = 0;
            }
            if (maze[i][j] == 'F') {
                fireQ.push({ i, j });
                fire[i][j] = 0;
            }
        }
    }

    while (!fireQ.empty()) {
        pair<int, int> curFire = fireQ.front();
        fireQ.pop();
        for (int i = 0; i < 4; i++) {
            int nxFire = curFire.first + dx[i];
            int nyFire = curFire.second + dy[i];

            if (nxFire < 0 || nxFire >= R || nyFire < 0 || nyFire >= C) continue;
            if (fire[nxFire][nyFire] >= 0 || maze[nxFire][nyFire] == '#') continue;
            fire[nxFire][nyFire] = fire[curFire.first][curFire.second] + 1;
            fireQ.push({ nxFire, nyFire });
        }
    }

    while (!jihunQ.empty()) {
        pair<int, int> curJihun = jihunQ.front();
        jihunQ.pop();
        for (int i = 0; i < 4; i++) {
            int nxJihun = curJihun.first + dx[i];
            int nyJihun = curJihun.second + dy[i];

            if (nxJihun < 0 || nxJihun >= R || nyJihun < 0 || nyJihun >= C) {
                cout << jihun[curJihun.first][curJihun.second] + 1;
                return 0;
            }
            if (jihun[nxJihun][nyJihun] >= 0 || maze[nxJihun][nyJihun] == '#') continue;
            if (fire[nxJihun][nyJihun] != -1 && fire[nxJihun][nyJihun] <= jihun[curJihun.first][curJihun.second] + 1) continue;
            jihun[nxJihun][nyJihun] = jihun[curJihun.first][curJihun.second] + 1;
            jihunQ.push({ nxJihun, nyJihun });
        }
    }
    cout << "IMPOSSIBLE";
}