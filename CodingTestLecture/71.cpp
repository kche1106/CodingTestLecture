//
//  71.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/07.
//

#include <iostream>
#include <queue>
using namespace std;

int ch[10001];
queue<int> q;
int d[] = {1, -1, 5};

int main() {
    int s, e;
    cin >> s >> e;
    
    q.push(s);
    ch[s] = 1;
    
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        
        for(int i = 0; i < 3; i++) {
            int ds = x + d[i];
            
            if(ds <= 0 || ds > 10000) continue;
            
            if(ds == e) {
                cout << ch[x] << endl;   //시작점인 ch[s]를 1로 초기화 했기 때문에 ds 도착전 위치인 ch[x]를 출력해야함
                exit(0);
            }
            
            if(ch[ds] == 0) {
                ch[ds] = ch[x] + 1;
                q.push(ds);
            }
        }
    }
}
