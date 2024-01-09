//
//  DP_11.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/09.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int ps, pt;
    
    vector<int> dy(m+1);
    for(int i = 0; i < n; i++) {
        cin >> ps >> pt;
        
        for(int j = m; j >= pt; j--) {
            dy[j] = max(dy[j], dy[j-pt] + ps);
        }
    }
    
    cout << dy[m] << endl;
}
