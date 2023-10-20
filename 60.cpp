//
//  60.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/10/20.
//

#include <iostream>
#include <vector>
using namespace std;

int n,total = 0;
int arr[11];
bool flag = false;

void DFS(int l, int sum) {
    
    if(sum > total / 2) return;
    if(flag == true) return;
    
    if(l == n+1) {
        if(sum == (total - sum)) {
            flag = true;
        }
    }
    
    else {
        DFS(l+1, sum + arr[l]);
        DFS(l+1, sum);
    }
}

int main() {
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    
    DFS(1, 0);  //레벨, 원소의 합
    if(flag) cout << "YES\n";
    else cout << "NO\n";
}
