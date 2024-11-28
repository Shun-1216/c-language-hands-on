#include <stdio.h>

void main()
{
    /*変数宣言*/
    int x,y,z;
    int a,b,c;
    float d;

    /*入力*/
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);
    printf("z = ");
    scanf("%d",&z);
    printf("x = %d y = %d z = %d",x,y,z);

    /*計算*/
    a = x+y+z;
    b=x-y-z;
    c=x*y*z;
    d=(float)x/y/z;

    /*計算結果表示*/
    printf("x + y + z = %d\n",a);
    printf("x - y - z = %d\n",b);
    printf("x * y * z = %d\n",c);
    printf("x / y / z = %f\n",d);    
}