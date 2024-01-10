//
//  88.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/10.
//

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int map[8][8], ch[8][8] = {1001, };
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
queue<pair<int, int>> q;

int main() {
    for(int i = 1; i <= 7; i++) {
        for(int j = 1; j <= 7; j++) {
            cin >> map[i][j];
        }
    }
    
    q.push(make_pair(1, 1));
    map[1][1] = 1;
    
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx > 0 && nx < 8 && ny > 0 && ny < 8) {
                if(map[nx][ny] == 0) {
                    map[nx][ny] = 1;
                    ch[nx][ny] = ch[x][y] + 1;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
    
    cout << ch[7][7] << endl;
}
