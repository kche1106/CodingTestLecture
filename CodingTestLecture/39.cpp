//
//  39.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/03.
//

#include <iostream>
using namespace std;

int main() {
    int n, m, arr1[101], arr2[101], arr3[202];
    
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> arr1[i];
    }
    
    cin >> m;
    for(int i = 1; i <= m; i++) {
        cin >> arr2[i];
    }
    
    int p1 = 1, p2 = 1, p3 = 1;
    
    while(p1 <= n && p2 <= m) {
        if(arr1[p1] < arr2[p2]) {
            arr3[p3++] = arr1[p1++];
        }
        else {
            arr3[p3++] = arr2[p2++];
        }
    }
    
    while(p1 <= n) arr3[p3++] = arr1[p1++];
    while(p2 <= m) arr3[p3++] = arr2[p2++];
    
    for(int i = 1; i <= n+m; i++) {
        cout << arr3[i] << " ";
    }
}
