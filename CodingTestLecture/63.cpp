//
//  63.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/04.
//

#include <iostream>
using namespace std;

int map[51][51];

int main() {
    int n, m;
    cin >> n >> m;  //노드, 간선

    for(int i = 1; i <= m; i++) {
        int a, b, c;  //출발, 도착, 가중치
        cin >> a >> b >> c;
        map[a][b] = c;
    }
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
    
}
