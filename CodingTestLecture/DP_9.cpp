//
//  DP_9.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/11/12.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, w, v;
    cin >> n >> m;  //보석의 종류 개수, 가방에 담을 수 있는 무게
    vector<int> dy(m+1, 0);   //크기는 m+1, 값은 0으로 초기화
    
    for(int i = 0; i < n; i++) {
        cin >> w >> v;   //무게, 가치
        for(int j = w; j <= m; j++) {
            dy[j] = max(dy[j], dy[j-w] + v);
        }
    }
    
    cout << dy[m];
}
