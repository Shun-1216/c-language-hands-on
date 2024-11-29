#include <stdio.h>

void main()
{
    /*変数宣言*/
    int i,total;

    /*初期化*/
    total = 0;
    i = 1;

    /*繰り返し*/
    do
    {
        total = total + i;
        printf("%d回目　total = %d\n",i,total);
        i++;
    }while(i<=5);

    printf("1から5までの加算結果 = %d",total);
}