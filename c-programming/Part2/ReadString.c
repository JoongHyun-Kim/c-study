#include <stdio.h>

int main(void)
{
    char str[50];
    int idx = 0;
  
    printf("문자열을 입력하세요! ");
    scanf("%s", str);
    printf("입력 받은 문자열: %s \n", str);
  
    printf("문자 단위로 출력: ");
    while(str[idx] != '\0')
    {
        printf("%c", str[idx]);
        idx++;
    }
    printf("\n");
  
    return 0;
}
