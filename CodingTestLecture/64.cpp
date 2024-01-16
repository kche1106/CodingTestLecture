//
//  64.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/16.
//

#include <iostream>
using namespace std;

vector<int> graph[20];
int visited[20];
int res;
int n, m;

void dfs(int x) {
    
    if(x == n) res++;
    
    for(int i = 0; i < graph[x].size(); i++) {
        if(!visited[graph[x][i]]) {
            visited[graph[x][i]] = 1;
            dfs(graph[x][i]);
            visited[graph[x][i]] = 0;
        }
    }
}

int main() {
    cin >> n >> m;
    
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }
    
    visited[1] = 1;
    dfs(1);
    
    cout << res << endl;
}
