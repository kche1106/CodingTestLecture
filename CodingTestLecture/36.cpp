//
//  36.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/05/07.
//

#include <iostream>
using namespace std;

int main() {
    int n, a[100], tmp, i, j;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(i = 1; i < n; i++) {
        tmp = a[i];
        for(j = i - 1; j >= 0; j--) {
            if(a[j] > tmp) a[j+1] = a[j];
            else break;
        }
        a[j+1] = tmp;
    }
    
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
