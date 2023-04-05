//
//  34.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/05.
//

#include <iostream>
using namespace std;

int main() {
    int a[101], n, tmp;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
