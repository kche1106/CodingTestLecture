//
//  62.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2024/01/04.
//

#include <iostream>
using namespace std;

int arr[101];
int tmp[101];
int n;

void divide(int a, int b) {
    if(a >= b) return;
    
    int mid = (a + b) / 2;
    divide(a, mid);
    divide(mid+1, b);
    
    int p1 = a;
    int p2 = mid+1;
    int p3 = a;
    
    while(p1 <= mid && p2 <= b) {
        if(arr[p1] < arr[p2]) tmp[p3++] = arr[p1++];
        else tmp[p3++] = arr[p2++];
    }
    while(p1 <= mid) tmp[p3++] = arr[p1++];
    while(p2 <= b) tmp[p3++] = arr[p2++];
    
    for(int i = a; i <= b; i++) {
        arr[i] = tmp[i];
    }
}

int main() {
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    divide(0, n-1);
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
