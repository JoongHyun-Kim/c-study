#include <stdio.h>

int main(void)
{
    int arr[3] = {1, 2, 3};
    int* ptr = &arr[0]; //배열이름 arr와 동일한 주소값을 갖도록 하기 위해 arr의 첫번째 요소의 주소값을 저장
                        //int* ptr = arr;와 동일한 의미
    printf("%d %d \n", ptr[0], arr[0]);
    printf("%d %d \n", ptr[1], arr[1]);
    printf("%d %d \n", ptr[2], arr[2]);
    printf("%d %d \n", *ptr, *arr);
  
    return 0;
}
