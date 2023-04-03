//
//  77.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/03.
//

#include <iostream>
using namespace std;

//공통원소가 있으면 하나의 집합으로
//disjoint-set : 서로소 집합
int unf[1001];

int find(int v) {
    //v라는 학생의 집합 번호 리턴
    if(v == unf[v]) return v;
    else return unf[v] = find(unf[v]);  //결국 루트노드가 집합 번호가 됨(메모이제이션)
}

void Union(int a, int b) {
    a = find(a);
    b = find(b);
    if(a != b) unf[a] = b;
}

int main() {
    int N, M, a, b;  //N은 학생수, M은 숫자 쌍
    cin >> N >> M;
    
    for(int i = 1; i <= N; i++) {
        unf[i] = i;
        //unf의 인덱스 번호는 학생 번호
        //배열의 값은 집합 번호
        //각 학생은 자신의 학생 번호로 집합 번호 초기화
    }
    
    for(int i = 0; i < M; i++) {
        cin >> a >> b;
        Union(a, b);
    }
    
    cin >> a >> b;
    a = find(a);
    b = find(b);
    if(a == b) cout << "YES";
    else cout << "NO";
}
