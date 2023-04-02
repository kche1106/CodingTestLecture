//
//  76.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/02.
//

#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 1)
        return 1;
    return n * factorial(n-1);
}

int main() {
    int n;
    cin >> n;
    
    cout << factorial(n);
}
