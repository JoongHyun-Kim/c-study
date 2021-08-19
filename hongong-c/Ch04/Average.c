// 두 과목의 점수를 입력받아 평균을 출력하는 프로그램
// 평균은 소숫점 이하 첫째자리까지 출력
#include <stdio.h>

int main(void)
{
    int a, b, tot;
    double avg;
    
    printf("두 과목의 점수: ");
    scanf("%d %d", &a, &b);
    tot = a + b;
    avg = tot / 2.0;
    
    printf("평균: .1lf \n", avg);
    
    return 0;
}   
