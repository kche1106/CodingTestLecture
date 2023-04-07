//
//  35.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/07.
//

#include <iostream>
using namespace std;

int main() {
    freopen("input.txt", "rt", stdin);
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > 0 && arr[j+1] < 0) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
