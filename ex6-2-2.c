#include <stdio.h>

void main()
{
    /*変数宣言*/
    int h;

    /*入力*/
    printf("時刻を入力してください。");
    fflush(stdout);
    scanf("%d",&h);

    /*分岐処理*/
    switch (h)
    {
        case 12:
            printf("お昼休みです！");
            break;
        case 13:
            printf("午後もがんばろう！");
            break;
        case 14:
        case 15:
            printf("居眠りしてませんか？");
            break;
        default:
            printf("今何してる？");
            break;
    }
}