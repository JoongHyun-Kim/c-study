#include <stdio.h>

int main(void)
{
    char voca[100];
    int len = 0;
    int i;
    char max = 0;
    
    printf("영단어를 입력하세요! ");
    scanf("%s", voca);
  
    while(voca[len] != '\0')
      len++; //영단어 길이 구하기
  
    for(i = 0; i < len; i++)
      if(max < voca[i])
        max = voca[i];
  
    printf("가장 큰 아스키 코드 값을 가진 문자: %c \n", max);
  
    return 0;
}
