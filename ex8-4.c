#include <stdio.h>

void calc(int,int,int *);

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
    calc(x,y,&z);

    /*出力*/
    printf("金額 = %d",z);
    
}

void calc(int price,int volume,int *p_total)
{
    /*計算*/
    *p_total = price * volume;
    /*1割引き*/
    if(volume >= 100)
    {
        *p_total *= 0.9;
    }

    return ;
}