//
//  82.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/11.
//

#include <iostream>
using namespace std;

int num[16], isvisit[16], result[16];
int n, r, cnt;

void DFS(int l) {
    if(l == r) {
        for(int i = 0; i < l; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
        cnt++;
    }
    else {
        for(int i = 0; i < n; i++) {
            if(isvisit[i] == 0) {
                result[l] = num[i];
                isvisit[i] = 1;
                DFS(l+1);
                isvisit[i] = 0;
            }
        }
    }
}

int main() {
    cin >> n >> r;
    
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }
    
    DFS(0);
    cout << cnt << endl; 
}
