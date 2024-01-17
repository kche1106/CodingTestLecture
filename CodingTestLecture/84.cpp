//
//  84.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/17.
//

#include <iostream>
using namespace std;

int n;
vector<int> t, p;
int res;
int ch[16];

void DFS(int day, int pay) {
    if(day == n+1) {
        if(res < pay) res = pay;
    }
    else {
        if(day + t[day] <= n+1) DFS(day + t[day], pay + p[day]);
        DFS(day+1, pay);
    }
}

int main() {
    cin >> n;
    
    int a, b;
    t.push_back(0);
    p.push_back(0);
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        t.push_back(a);
        p.push_back(b);
    }
    
    DFS(1, 0);
    
    cout << res << endl;
}

/*
7
4 20
2 10
3 15
3 20
2 30
2 20
1 10
 */
