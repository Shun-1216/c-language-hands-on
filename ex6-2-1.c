#include <stdio.h>

void main()
{
    int h;

    printf("時刻を入力してください。");
    fflush(stdout);
    scanf("%d",&h);

    if(h < 12)
    {
        printf("おはよう！");
    }
    else
    {
        if(h >= 12 && h < 18 )
        {
            printf("こんにちは！");
        }
        else
        {
            printf("こんばんは！");
        }

    }
}