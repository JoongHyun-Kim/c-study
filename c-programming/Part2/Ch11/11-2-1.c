// 영단어를 입력 받아서 입력 받은 영단어의 길이를 계산하여 출력
#include <stdio.h>

int main(void)
{
    char voca[100];
    int len = 0;
  
    printf("영단어 입력: ");
    scanf("%s", voca);
  
    while(voca[len] != 0)
      len++;
  
    printf("입력한 영단어의 길이는 %d \n이다", len);
  
    return 0;
}
