#include <stdio.h>

void main()
{
    /*変数宣言*/
    int count,i,inputdata,total;

    /*変数初期化*/
    total = 0;

    /*回数入力*/
    printf("何回加算しますか？");
    fflush(stdout);
    scanf("%d",&count);

    for(i=1;i<=count;i++)
    {
        /*数入力*/
        printf("%d回目の数 = ",i);
        fflush(stdout);
        scanf("%d",&inputdata);
        
        total = total + inputdata;
    }
    printf("%d個の数値の合計 = %d",count,total);
}