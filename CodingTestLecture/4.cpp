//
//  4.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/07.
//

#include <iostream>
using namespace std;

int main() {
    freopen("input.txt", "rt", stdin);  //파일 입출력
    
    int n;
    cin >> n;
    
    int max = 0, min = 150, age;
    for(int i = 0; i < n; i++) {
        cin >> age;
        if(age > max) max = age;
        if(age < min) min = age;
    }
    
    cout << max - min << endl;
}
