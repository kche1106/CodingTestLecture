//
//  59.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/05/08.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, ch[11];

void DFS(int L) {
    if(L == n+1) {
        for(int i = 1; i <= n; i++) {
            if(ch[i] == 1) cout << i << " ";
        }
        cout << endl;
    }
    else {
        ch[L] = 1;
        DFS(L + 1);
        ch[L] = 0;
        DFS(L + 1);
    }
}


int main() {
//    freopen("input.txt", "rt", stdin);
    cin >> n;
    DFS(1);
    return 0;
}
