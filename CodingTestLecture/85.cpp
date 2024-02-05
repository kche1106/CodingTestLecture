//
//  85.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/02/05.
//

#include <iostream>
using namespace std;

int a[11];
int b[10];
int n;
int minimum = 100000000;
int maximum = 0;

void DFS(int l, int num) {
    if(l == n) {
        if(num > maximum) maximum = num;
        if(num < minimum) minimum = num;
    }
    
    else {
        if(b[0] > 0) {  //덧셈
            b[0]--;
            DFS(l+1, num + a[l]);
            b[0]++;
        }
        if(b[1] > 0) {  //빼기
            b[1]--;
            DFS(l+1, num - a[l]);
            b[1]++;
        }
        if(b[2] > 0) {  //곱셈
            b[2]--;
            DFS(l+1, num * a[l]);
            b[2]++;
        }
        if(b[3] > 0) {  //나누기
            b[3]--;
            DFS(l+1, num / a[l]);
            b[3]++;
        }
    }
}

int main() {
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < 4; i++) {
        cin >> b[i];  //+, -, x, /
    }
    
    DFS(1, a[0]);
    
    cout << maximum << '\n' << minimum;
    
}

/*
3
5 3 8
1 0 1 0
 */

/*
64
23
 */
