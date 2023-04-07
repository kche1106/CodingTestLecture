//
//  DP_2.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/07.
//

#include <iostream>
using namespace std;

int dy[101];  //메모이제이션

int DFS(int n) {
    if(dy[n] > 0) return dy[n];
    if(n == 1 || n == 2) return n;
    else return dy[n] = DFS(n-1) + DFS(n-2);
}

int main() {
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        dy[i] = 0;
    }
    
    cout << DFS(n);
}
