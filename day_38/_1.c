#include <stdio.h>

int main()
{
    int a = 1;// 0x 00000001
    int* pa = &a;
    char* pc = (char*)&a;
    if(*pc == 1)
        printf("小端\n");// 01 00 00 00
    else
        printf("大端\n"); // 00 00 00 01
    return 0; 
}