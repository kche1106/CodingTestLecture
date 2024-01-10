//
//  90.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/10.
//

#include <iostream>
#include <queue>
using namespace std;

int map[101][101], ch[101][101];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0 , -1, 1};

struct State {
    int x, y, dis;
    
    State(int x, int y, int dis) {
        this -> x = x;
        this -> y = y;
        this -> dis = dis;
    }
    
    bool operator < (const State &b) const{
        if(dis == b.dis) {
            if(x == b.x) return y > b.y;
            else return x > b.x;
        }
        else return dis > b.dis;
    }
};

struct Lion {
    int x, y, size, ate;
    
    void sizeup() {
        ate = 0;
        size++;
    }
};

int main() {
    int n, res = 0;
    cin >> n;
    
    Lion simba;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> map[i][j];
            if(map[i][j] == 9) {
                simba.x = i;
                simba.y = j;
                simba.size = 2;
                simba.ate = 0;
                map[i][j] = 0;
            }
        }
    }
    
    priority_queue<State> q;
    q.push(State(simba.x, simba.y, 0));
    
    while(!q.empty()) {
        int x = q.top().x;
        int y = q.top().y;
        int z = q.top().dis;
        q.pop();
        
        if(map[x][y] < simba.size && map[x][y] != 0) {
            simba.x = x;
            simba.y = y;
            simba.ate++;
            
            if(simba.ate == simba.size) simba.sizeup();
            map[x][y] = 0;
            
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= n; j++) {
                    ch[i][j] = 0;
                }
            }
            
            while (!q.empty()) q.pop();
            
            res = z;
        }
        
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx > 0 && nx <= n && ny > 0 && ny <= n) {
                if(map[nx][ny] < simba.size && ch[nx][ny] == 0) {
                    q.push(State(nx, ny, z+1));
                    ch[nx][ny] = 1;
                }
            }
        }
    }
    
    cout << res << endl;
}
