// 입력받은 정수 값의 부호를 바꿔서 출력하는 프로그램
// 비트연산자를 이용해 구현한다.

#include <stdio.h>

int main(void)
{
    int num;
    printf("정수를 입력하세요!");
    scanf("%d", &num);
    
    num = ~num;
    num = num + 1;
    
    printf("부호를 바꾼 결과: %d \n", num);
    
    return 0;
}
