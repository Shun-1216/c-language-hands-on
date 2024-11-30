#include <stdio.h>

void main()
{
    /*変数宣言*/
    char message[] = "Let's study C langauage!!";
    char *p_message;
    int count = 0;

    /*配列の頭のアドレス指定*/
    p_message = message;
    
    while(*p_message != '\0')
    {
        if(*p_message == 'a')
        {
            count++;
        }
        p_message++;
    }

    printf("文字列%sに含まれている文字'a'の数は%d",message,count);
}