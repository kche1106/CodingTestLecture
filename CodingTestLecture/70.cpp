//
//  70.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/06.
//

#include <iostream>
#include <queue>
using namespace std;

vector<int> map[20];
int dis[20], isvisit[20];
queue<int> q;

int main() {
    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        map[a].push_back(b);
    }
    
    q.push(1);
    isvisit[1] = 1;
    
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        
        for(int i = 0; i < map[x].size(); i++) {
            if(isvisit[map[x][i]] == 0) {
                
                dis[map[x][i]] = dis[x] + 1;
                
                isvisit[map[x][i]] = 1;
                q.push(map[x][i]);
            }
        }
    }
    
    for(int i = 2; i <= n; i++) {
        cout << i << " : " << dis[i] << endl;
    }
}
