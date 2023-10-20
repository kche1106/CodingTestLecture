////
////  hh.cpp
////  CodingTestLecture
////
////  Created by 김채은 on 2023/05/17.
////
//
//#include <stdio.h>
//
//int main()
//{
//    FILE* fp;
//    fopen_s(&fp, "c:/temp/indata.txt", "r");
//    if (fp != NULL)
//    {
//        int n;
//        double aa[200], num = 0, average;
//        double hap = 0.0;
//        fscanf_s(fp, "%d", &n);
//        for (int i = 0; i < n; i++)
//        {
//            fscanf_s(fp, "%lf", &aa[i]);
//        }
//        for (int j = 0; j < n; j++)
//        {
//            num = aa[j];
//            hap += aa[j];
//            average = hap / n;
//            fclose(fp);
//            //            printf("%6.3lf \n", num);
//        }
//
//        double min, tmp;
//        int minIdx;
//        for (int i = 0;i < n - 1;i++) {
//            for (int j = 0;j < n - i - 1;j++) {
//                if (aa[j] > aa[j + 1]) {
//                    tmp = aa[j];
//                    aa[j] = aa[j + 1];
//                    aa[j + 1] = tmp;
//                }
//            }
//        }
//
//        printf("\n");
//        printf("\n");
//
//        for (int i = 0; i < n; i++)
//        {
//            printf("%.1lf\n", aa[i]);
//        }
//
//        printf("\n");
//        printf("\n");
//        printf("합계=%6.3lf\n", hap);
//        printf("평균=%6.3lf\n", average);
//        printf("\n");
//
//    }
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
char n[30];
 
char *test() {
printf("입력하세요 : ");
fgets(n, sizeof(n), stdin);
return n;
}
 
int main()
{
char * test1;
char * test2;
char * test3;
 
test1 = test();
test2 = test();
test3 = test();
 
printf("%s\n",test1);
printf("%s\n",test2);
printf("%s",test3);
return 0;
}
