//
//  3.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/05.
//

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
        
    cout << "1";
    
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            cout << " + " << i;
            sum += i;
        }
    }
    
    cout << " = " << sum + 1;
        
}
