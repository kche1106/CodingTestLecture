//
//  79.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/08.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int ch[30];

struct Edge {
    int e;    //노드
    int val;  //가중치
    
    Edge(int a, int b) {
        e = a;
        val = b;
    }
    
    //'<' 연산자 오버로딩
    bool operator < (const Edge &b) const {
        return val > b.val;  //최소 heap으로 구성
    }
};

int main() {
    freopen("input.txt", "rt", stdin);
    
    priority_queue<Edge> Q;  //우선순위 큐 생성
    vector<pair<int, int>> map[30];  //가중치 인접리스트
    
    int i, n, m, a, b, c, res=0;
    cin >> n >> m;
    
    for (i=1; i<=m; i++){
        cin >> a >> b >> c;  //간선의 정보
        //무방향 가중치 인접리스트
        map[a].push_back(make_pair(b, c));  //a에서 b로 갈 수 있고
        map[b].push_back(make_pair(a, c));  //b에서 a로 갈 수 있음
    }
    
    Q.push (Edge (1, 0));  //최초의 임의의 출발 지점
    while(!Q.empty()){
        Edge tmp = Q.top();  //top을 참조
        Q. pop();
        int v = tmp.e;
        int cost=tmp.val;
        
        if(ch[v]==0){  //v가 트리의 원소가 아니라면
            res+=cost;  //가중치 더해주고
            ch[v] = 1;  //트리의 원소가 됐다고 표시
            
            for (i=0; i < map[v].size(); i++){
                //v 정점에서 뻗을 수 있는 간선 push
                Q.push(Edge(map[v][i].first, map[v][i].second));  //first는 v에서 갈 수 있는 정점 번호, second는 가중치
            }
        }
    }
    cout << res << " ";
}
