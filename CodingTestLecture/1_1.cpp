//
//  main.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/02.
//

#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int sum = 0;
    for(int i = 0; i <= N; i++) {
        if(i % M == 0)
            sum += i;
    }
    
    cout << sum;
}
