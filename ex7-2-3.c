#include <stdio.h>

void main()
{
    /*変数宣言*/
    int count,inputdata,total;

    /*初期化*/
    count = 0;
    total = 0;

    /*入力*/
    printf("整数を入力しください。(999で終了)");
    fflush(stdout);
    scanf("%d",&inputdata);

    while(inputdata != 999)
    {
        count += 1;
        total += inputdata;
        printf("整数を入力しください。(999で終了)");
        fflush(stdout);
        scanf("%d",&inputdata);
    }
    printf("合計 = %d 件数 = %d",total,count);

}