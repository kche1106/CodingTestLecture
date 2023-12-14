//
//  DP_6.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/12/14.
//

#include <iostream>
using namespace std;

struct Brick {
    int s, h, w;
    
    Brick(int a, int b, int c) {
        s = a;
        h = b;
        w = c;
    }
    
    bool operator < (const Brick &b) const {
        return s > b.s;  //넓이에 대해 내림차순
        //operator을 호출한 객체가 앞, 인자로 넘어온 객체가 뒤
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    freopen("input.txt", "rt", stdin);
    
    int n, a, b, c, max_h = 0, res = 0;
    cin >> n;
    
    vector<Brick> Bricks;
    vector<int> dy(n, 0);  //dynamic table
    
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;  //벽돌의 정보
        Bricks.push_back(Brick(a, b, c));
    }
    
    sort(Bricks.begin(), Bricks.end());  //넓이 기준으로 내림차순 정렬
    
    dy[0] = Bricks[0].h;  //첫번째 벽돌(벽돌 1개일 때)
    res = dy[0];
    
    for(int i = 1; i < n; i++) {  //i번 벽돌이 꼭대기 벽돌이라고 가정
        max_h = 0;
        for(int j = i-1; j >= 0; j--) {
            if((Bricks[j].w > Bricks[i].w) && dy[j] > max_h) {  //밑에 있는 j번 벽돌이 꼭대기에 있을 i번 벽돌보다 무거운 것 중 높이가 가장 높은 것
                max_h = dy[j];
            }
        }
        dy[i] = max_h + Bricks[i].h;
        res = max(res, dy[i]);
    }
    
    cout << res;
}
