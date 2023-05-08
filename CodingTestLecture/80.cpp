//
//  80.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/05/08.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Edge {
    int vex;    //정점 번호
    int dis;  //정점까지 가는데 비용
    
    Edge(int a, int b) {
        vex = a;
        dis = b;
    }
    
    //'<' 연산자 오버로딩
    bool operator < (const Edge &b) const {
        return dis > b.dis;  //최소 heap으로 구성 -> 가장 작은 값이 맨 앞에
    }
};

int main() {
    freopen("input.txt", "rt", stdin);
    
    priority_queue<Edge> Q;  //우선순위 큐 생성
    vector<pair<int, int>> graph[30];  //가중치 인접리스트
    int i, n, m, a, b, c;
    cin >> n >> m;
    vector<int> dist(n+1, 2147000000);  //무한대로 초기화
    
    for (i=1; i<=m; i++){
        cin >> a >> b >> c;  //간선의 정보
        graph[a].push_back(make_pair(b, c));  //a에서 b로 갈 수 있고
    }
    
    Q.push(Edge(1, 0));
    dist[1] = 0;  //정점까지 가는데 드는 최소 비용
    while(!Q.empty()){
        int now = Q.top().vex;
        int cost = Q.top().dis;
        Q. pop();
        
        if(cost > dist[now]) continue;
        
        for(i = 0; i < graph[now].size(); i++) {
            int next = graph[now][i].first;
            int nextDis = cost + graph[now][i].second;
            if(dist[next] > nextDis) {
                dist[next] = nextDis;
                Q.push(Edge(next, nextDis));
            }
        }
    }
    
    for (i=2; i<=n; i++){
        if(dist[i] != 2147000000) cout << i << " : " << dist[i] << endl;
        else cout << i << " : impossible" << endl;
    }
}
