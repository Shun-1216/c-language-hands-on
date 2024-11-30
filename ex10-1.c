#include <stdio.h>

void main()
{
    /*変数宣言*/
    int i;
    char message[] = "Programming";

    /*出力*/
    printf("%s\n",message);

    for(i=0;message[i]!='\0';i++)
    {
        printf("%c\n",message[i]);
    }
}