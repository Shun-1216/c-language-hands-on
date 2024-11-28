#include <stdio.h>

void main()
{
    /*変数宣言*/
    int h;
    
    printf("時刻を入力してください");
    fflush(stdout); /*これでバッファを強制的にフラッシュできるらしい*/
    scanf("%d",& h);

    if(h < 12)
    {
        printf("おはよう！");
    }
    else
    {
        printf("こんにちは！");  
    }

}