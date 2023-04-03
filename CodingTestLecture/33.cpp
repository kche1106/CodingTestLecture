//
//  33.cpp
//  CodingTestLecture
//
//  Created by 김채은 on 2023/04/03.
//

#include <iostream>
using namespace std;

int main() {
    int n, score[101], cnt = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> score[i];
    }
    
//    for(int i = 0; i < n-1; i++) {
//        for(int j = i+1; j < n; j++) {
//            if(score[i] < score[j]) {
//                int tmp = score[j];
//                score[j] = score[i];
//                score[i] = tmp;
//            }
//        }
//    }

    for(int i = 0; i < n-1; i++) {
        int idx = i;
        for(int j = i+1; j < n; j++) {
            if(score[idx] < score[j]) idx = j;
        }
        int tmp = score[i];
        score[i] = score[idx];
        score[idx] = tmp;
    }
    
    for(int i = 0; i < n-1; i++) {
        if(score[i] != score[i+1])
            cnt ++;
        if(cnt == 3) {
            cout << score[i];
            break;
        }
    }
}
