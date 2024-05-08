// 회전하는 큐 / 실버 3
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M, left, right, cnt = 0;
    deque<int> dq;
    cin >> N >> M;
    
    for (int i = 1; i <= N; i++) {
        dq.push_back(i);
    }
    while(M--) {
        int num;
        cin >> num;
        
        for (int i = 0; i < dq.size(); i++) {
            if (dq[i] == num) {
                left = i;
                right = dq.size() - i;
                break;
            }
        }
        
        if (left <= right) {
            while(1) {
                if (dq.front() == num)
                    break;
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
            dq.pop_front();
        } else {
            cnt++;
            while(1) {
                if (dq.back() == num)
                    break;
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
            dq.pop_back();
        }
        
    }
    cout << cnt << "\n";
}