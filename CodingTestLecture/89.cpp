//
//  89.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/02/05.
//

#include <iostream>
#include <queue>
using namespace std;

int tomato[1000][1000];
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

int main() {
    int n, m;  //세로, 가로
    cin >> m >> n;
    
    queue<pair<int, int>> q;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> tomato[i][j];
            //익은 토마토
            if(tomato[i][j] == 1) q.push({i, j});
        }
    }
    
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            
            if(tomato[nx][ny] == 0) {
                tomato[nx][ny] = tomato[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    
    int day = 0;
    bool ans = true;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(tomato[i][j] == 0) {
                ans = false;
                break;
            }
            if(day < tomato[i][j]) day = tomato[i][j];
        }
    }
    
    if(ans) cout << day-1 << endl;
    else cout << "-1" << endl;
}

/*
6 4
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 1
 */
