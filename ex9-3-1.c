#include <stdio.h>

void main()
{
    /*変数宣言*/
    int i;
    int array[5];

    /*入力*/
    for(i=0;i<5;i++)
    {
        printf("%d番目のデータを入力してください。",i+1);
        fflush(stdout);
        scanf("%d",&array[i]);
    }

    /*出力*/
    for(i=0;i<5;i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
}