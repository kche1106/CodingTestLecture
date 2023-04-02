//
//  76_2.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/02.
//

#include <iostream>
using namespace std;

//5C3 = 4C2 + 4C3
//메모이제이션: 미리 계산해둔 것은 다시 계산되지 않게끔

int dy[21][21];

int DFS(int n, int r) {
    if(dy[n][r] > 0) return dy[n][r];
    if(n == r || r == 0)
        return 1;
    return dy[n][r] = DFS(n-1, r-1) + DFS(n-1, r);  //메모이제이션
}

int main() {
    int n, r;
    cin >> n >> r;
    cout << DFS(n, r);
}
