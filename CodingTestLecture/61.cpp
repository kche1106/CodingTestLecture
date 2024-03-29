//
//  61.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/03.
//

#include <iostream>
using namespace std;

int arr[11], trac[11];
int n, m, res;

void DFS(int i, int sum) {
    if(i == n) {
        if(sum == m) {
            res++;
            for(int j = 0; j < n; j++) {
                cout << trac[j] << " ";
            }
            cout << endl;
        }
    }
    
    else {
        trac[i] = arr[i];
        DFS(i+1, sum + arr[i]);
        trac[i] = -arr[i];
        DFS(i+1, sum - arr[i]);
        trac[i] = 0;
        DFS(i+1, sum);
    }
}

int main() {
    cin >> n >> m;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    DFS(0, 0);
    
    cout << res << endl;
}
