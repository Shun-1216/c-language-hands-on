#include <stdio.h>
#include <math.h>

void main()
{
    /*変数宣言*/
    float x,y,answer;

    /*入力*/
    printf("累乗する値を入力してください。");
    fflush(stdout);
    scanf("%f",&x);
    printf("何乗しますか？値を入力してください。");
    fflush(stdout);
    scanf("%f",&y);

    /*計算＆表示*/
    answer = pow(x,y);
    printf("%fの%f乗は%fです。",x,y,answer);

}