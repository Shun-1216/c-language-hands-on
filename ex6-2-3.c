#include <stdio.h>

void main()
{
    /*変数宣言*/
    int x,y,z;

    /*入力*/
    printf("国語の点数を入力してください。");
    fflush(stdout);
    scanf("%d",&x);
    printf("数学の点数を入力してください。");
    fflush(stdout);
    scanf("%d",&y);
    printf("英語の点数を入力してください。");
    fflush(stdout);
    scanf("%d",&z);

    /*条件処理*/
    if(x >= 60 && y >= 60 && z >= 60)
    {
        printf("合格！");
    }
    else
    {
        printf("不合格！");
    }
    
}