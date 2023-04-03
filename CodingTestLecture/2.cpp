//
//  2.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/03.
//

#include <iostream>
using namespace std;

int main() {
    int A, B, sum = 0;
    cin >> A >> B;
    
    for(int i = A; i < B; i++) {
        sum += i;
        cout << i << " + ";
    }
    cout << B << " = " << sum + B;
}
