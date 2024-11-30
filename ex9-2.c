#include <stdio.h>

void main()
{
    /*変数宣言*/
    int i;    
    int array[] = {1000,500,100,50,10};

    /*入力*/
    printf("表示する配列要素の添え字を入力してください。");
    fflush(stdout);
    scanf("%d",&i);

    /*条件分岐*/
    if (i >= 0 && i <= 4)
    {
        printf("array[%d] = %d",i,array[i]);
    }
    else
    {
        printf("添え字に範囲外が指定されました。");
    }
}