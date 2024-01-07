//
//  DP_10.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/07.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, cost;
    cin >> n;
    
    vector<int> coin(n);
    for(int i = 0; i < n; i++) {
        cin >> coin[i];
    }
    
    cin >> cost;
    
    vector<int> dp(cost+1, 1000);
    dp[0] = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = coin[i]; j <= cost; j++) {
            dp[j] = min(dp[j], dp[j-coin[i]] + 1);
        }
    }
    
    cout << dp[cost] << endl;
}
