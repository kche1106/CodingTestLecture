//
//  57.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/05.
//

#include <iostream>
using namespace std;

void func(int n) {
    if(n == 0) return;
    else {
        func(n / 2);
        cout << n % 2;
    }
}

int main() {
    int n;
    cin >> n;
    
    func(n);
}
