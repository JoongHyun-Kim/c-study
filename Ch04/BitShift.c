// 3X8/4의 결과를 출력하는 프로그램
// 단, *연산자와 / 연산자를 사용하지 않는다.

#include <stdio.h>

int main(void)
{
    int num = 3;
    num = num << 3;
    num = num >> 2;
    
    printf("%d \n", num);
  
    return 0;
}
