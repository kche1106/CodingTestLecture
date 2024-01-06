//
//  69.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/06.
//

#include <iostream>
using namespace std;

vector<int> map[10];
int visited[10];
int Q[100];

int main() {
    for(int i = 0; i < 6; i++) {
        int a, b;
        cin >> a >> b;
        map[a].push_back(b);
        map[b].push_back(a);
    }
    
    int front = -1, back = -1;
    
    Q[++back] = 1;
    visited[1] = 1;
    
    while(front < back) {
        
        int x = Q[++front];
        cout << x << " ";
        
        for(int i = 0; i < map[x].size(); i++) {
            if(visited[map[x][i]] == 0) {
                visited[map[x][i]] = 1;
                Q[++back] = map[x][i];
            }
        }
    }
}
