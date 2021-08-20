#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    int res;
  
    res = (++a, ++b); // ++a와 ++b가 차례로 수행
                      // 최종적으로 res에 저장되는 값은 ++b의 값
    printf("a: %d, b:%d \n", a, b);
    printf("res: %d \n", res);
  
    return 0;
}
