//
//  87.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/07.
//

#include <iostream>
#include <queue>
using namespace std;

int arr[21][21];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
queue<pair<int, int>> q;

int main() {
    int n, cnt = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            
            if(arr[i][j] == 1) {
                q.push(make_pair(i, j));
                arr[i][j] = 0;
                
                while(!q.empty()) {
                    
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    
                    for(int k = 0; k < 8; k++) {
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        
                        if(arr[nx][ny] == 1) {
                            arr[nx][ny] = 0;
                            q.push(make_pair(nx, ny));
                        }
                    }
                }
                cnt++;
            }
        }
    }
    
    cout << cnt << endl;
}
