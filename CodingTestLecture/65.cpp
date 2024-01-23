//
//  65.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/23.
//

#include <iostream>
using namespace std;

int map[8][8];
int visited[8][8];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int cnt = 0;

void DFS(int x, int y) {
    
    if(x == 7 && y == 7) {
        cnt++;
        return;
    }
    
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx <= 0 || ny <= 0 || nx > 7 || ny > 7) continue;
        if(map[nx][ny] == 0 && visited[nx][ny] == 0) {
            visited[nx][ny] = 1;
            DFS(nx, ny);
            visited[nx][ny] = 0;
        }
    }
}

int main() {
    for(int i = 1; i <= 7; i++) {
        for(int j = 1; j <= 7; j++) {
            cin >> map[i][j];
        }
    }
    
    visited[1][1] = 1;
    DFS(1, 1);
    
    cout << cnt << endl;
}

/*
 0 0 0 0 0 0 0
 0 1 1 1 1 1 0
 0 0 0 1 0 0 0
 1 1 0 1 0 1 1
 1 1 0 0 0 0 1
 1 1 0 1 1 0 0
 1 0 0 0 0 0 0
 */
