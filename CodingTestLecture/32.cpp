//
//  32.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/02.
//

#include <iostream>
using namespace std;

//선택 정렬
int main() {
    int a[100], n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
//    for(int i = 0; i < n-1; i++) {
//        int idx = i;
//        for(int j = i + 1; j < n; j++) {
//            if(a[j] < a[idx]) idx = j;
//        }
//        int tmp = a[i];
//        a[i] = a[idx];
//        a[idx] = tmp;
//    }
    
    for(int i = 0; i < n-1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[i]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
