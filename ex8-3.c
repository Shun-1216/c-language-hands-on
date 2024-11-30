#include <stdio.h>

int calc(int,int);

void main()
{
    /*変数宣言*/
    int x,y,z;

    /*入力*/
    printf("単価を入力してください。");
    fflush(stdout);
    scanf("%d",&x);
    printf("個数を入力してください。");
    fflush(stdout);
    scanf("%d",&y);

    /*関数で計算*/
    z = calc(x,y);

    /*出力*/
    printf("金額 = %d",z);
    
}

int calc(int price,int volume)
{
    /*変数宣言*/
    int total;
    /*計算*/
    total = price * volume;
    /*1割引き*/
    if(volume >= 100)
    {
        total *= 0.9;
    }

    return total;
}