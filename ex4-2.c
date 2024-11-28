#include <stdio.h>

void main()
{
    int x = 123;
    int *x_ptr = &x;

    printf("xのアドレス = %p x_ptrの値 = %p xの値 = %d",
    &x,x_ptr,x);
}