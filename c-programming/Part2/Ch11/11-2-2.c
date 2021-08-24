#include <stdio.h>

int main(void)
{
    char voca[100];
    int len = 0, i;
    char temp;
  
    printf("영단어를 입력하세요! ");
    scanf("%s", voca);
  
    while(voca[len] != '\0')
       len++; //영단어 길이 계산
  
    for(i = 0; i < len/2; i++)
    {
      temp = voca[i]; //temp에 앞 문자 임시로 저장
      voca[i] = voca[(len-i) -1];
       voca[(len-i)-1] = temp;
    }
    
    printf("거꾸로 영단어! %s \n", voca);
  
    return 0;
}     
