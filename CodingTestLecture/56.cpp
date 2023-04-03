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

/*
 [재귀함수와 스택]
 
 함수는 호출되면 호출 정보를 스택에 저장 -> 스택프레임
 (지역변수, 매개변수, 복귀 주소 등 기록)
 
 스택프레임을 더이상 저장할 수 없으면 스택 오버플로우
 제일 상단에 있는 스택프레임 함수가 작동 중
 */
