//
//  81.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/12/15.
//

#include <iostream>
using namespace std;

struct Edge {
    int s;
    int e;
    int val;
    
    Edge(int a, int b, int c) {
        s = a;
        e = b;
        val = c;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    freopen("input.txt", "rt", stdin);
    
    vector<Edge> Ed;
 
    int n, m, a, b, c, s, e;
    int dist[101];
    cin >> n >> m;
    
    for(int i = 1; i <= m; i++) {
        cin >> a >> b >> c;
        Ed.push_back(Edge(a, b, c));
    }
    
    for(int i = 1; i <= n; i++) {
        dist[i] = 2147000000;  //거리
    }
    
    cin >> s >> e;  //출발, 도착 정점
    dist[s] = 0;  //출발 정점 0으로 초기화
    
    for(int i = 1; i < n; i++) {  //i개수만큼 거쳐서 갈 수 있는 경로(i=1이면 간선 2개만으로 갈 수 있는 경로)
        for(int j = 0; j < Ed.size(); j++) {
            int u = Ed[j].s;  //출발
            int v = Ed[j].e;  //도착
            int w = Ed[j].val;  //가중치
            if(dist[u] != 2147000000 && dist[u] + w < dist[v]) {  //출발 정점에 가중치 더한게 기존 값보다 작으면
                dist[v] = dist[u] + w;
            }
        }
    }
    
    //음의 싸이클 확인
    for(int j = 0; j < Ed.size(); j++) {  //간선의 개수가 n개인데 최소 비용이 되는 경우 : 음의 싸이클
        int u = Ed[j].s;  //출발
        int v = Ed[j].e;  //도착
        int w = Ed[j].val;  //가중치
        if(dist[u] != 2147000000 && dist[u] + w < dist[v]) {  //출발 정점에 가중치 더한게 기존 값보다 작으면
            cout << "-1" << endl;
            exit(0);
        }
    }
    
    cout << dist[e] << endl;
    
}
