//
//  5.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/05/07.
//

#include <iostream>
using namespace std;

int main() {
    freopen("input.txt", "rt", stdin);
    
    char c[20];
    int year, age;
    cin >> c;
    
    //문자형 숫자를 정수형 숫자로 바꾸려면 -48 해줘야함
    if(c[7] == '1' || c[7] == '2')
        year = 1900 + ((c[0] - 48) * 10 + (c[1]-48));
    else year = 2000 + ((c[0] - 48) * 10 + (c[1]-48));
    age = 2019 - year + 1;
    cout << age << " ";
    
    if(c[7] == '1' || c[7] == '3') cout << "M" << endl;
    else cout << "W" << endl;
}
