//
//  72.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/23.
//

#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    deque<int> dq;
    for(int i = 1; i <= n; i++) {
        dq.push_back(i);
    }
    
    while(true) {
        if(dq.size() == 1) break;
        
        for(int i = 1; i < k; i++) {
            dq.push_back(dq.front());
            dq.pop_front();
        }
        dq.pop_front();
    }
    
    cout << dq.front() << endl;
}
