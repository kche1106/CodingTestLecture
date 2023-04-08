//
//  58.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/07.
//

#include <iostream>
using namespace std;

void D(int v) {
    if(v > 7) return;
    else {
        cout << v << " ";  //전위 순회
        D(v * 2);  //왼쪽 노드
        cout << v << " ";  //중위 순회
        D(v * 2 + 1);  //오른쪽 노드
        cout << v << " ";  //후위 순회
    }
}

int main() {
    D(1);
}
