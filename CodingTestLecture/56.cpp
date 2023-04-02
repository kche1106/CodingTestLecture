//
//  56.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/02.
//

#include <iostream>
using namespace std;

//재귀는 stack이라는 자료구조를 이용해 운영
void recur(int n) {
    if(n == 0)
        return;

    recur(n-1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    recur(n);
}
