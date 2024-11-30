#include <stdio.h>

void main()
{
    /*変数宣言*/
    int i;
    int array[5];
    int *p_array = array;

    /*入力*/
    for(i=0;i<5;i++)
    {
        printf("%d番目のデータを入力してください。",i+1);
        fflush(stdout);
        scanf("%d",(p_array + i));
    }

    /*出力*/
    for(i=0;i<5;i++)
    {
        printf("array[%d] = %d\n",i,*(p_array + i));
    }
}