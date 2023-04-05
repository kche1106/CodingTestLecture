//
//  78.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/05.
//

#include <iostream>
#include <vector>
using namespace std;

int unf[1001];

struct Edge {
    int v1;
    int v2;
    int val;  //가중치
    
    Edge(int a, int b, int c) {
        v1 = a;
        v2 = b;
        val = c;
    }
    
    //'<' 연산자 오버로딩
    bool operator < (Edge &b) {
        return val < b.val;  //오름차순
    }
};

int find(int v) {
    if(v == unf[v]) return v;
    else return unf[v] = find(unf[v]);
}

void Union(int a, int b) {
    a = find(a);
    b = find(b);
    if(a != b) unf[a] = b;
}

int main() {
    vector<Edge> Ed;
    int a, b, c, n, m;  //n은 노드의 개수, m은 간선의 개수
    cin >> n >> m;
     
    for(int i = 1; i <= n; i++) {
        unf[i] = i;
    }
    
    for(int i = 1; i <= m; i++) {
        cin >> a >> b >> c;
        Ed.push_back(Edge(a, b, c));
    }
    
    sort(Ed.begin(), Ed.end());  //가중치 값으로 오름차순 정렬
    
    int res = 0;
    for(int i = 0; i < m; i++) {
        int fa = find(Ed[i].v1);
        int fb = find(Ed[i].v2);
        if(fa != fb) {
            res += Ed[i].val;
            Union(Ed[i].v1, Ed[i].v2);
        }
    }
    
    cout << res;
}
