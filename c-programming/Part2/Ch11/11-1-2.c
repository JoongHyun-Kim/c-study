// char형 1차원 배열 선언, "Good time"으로 초기화
// 저장된 내용 출력
#include <stdio.h>
int main(void)
{
    char str[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
    int strLen = sizeof(str) / sizeof(char); //배열 A의 길이 
    int i;
    
    for(i = 0; i < strLen; i++) {
      printf("%c \n", str[i]);
    }

    return 0;
}
