#include <stdio.h>

typedef struct
{
    int code,japanese,math;
} student;

void main()
{
    student data1;
    
    /*入力*/
    printf("生徒コードは？");
    fflush(stdout);
    scanf("%d",&data1.code);
    printf("国語の点数は？");
    fflush(stdout);
    scanf("%d",&data1.japanese);
    printf("数学の点数は？");
    fflush(stdout);
    scanf("%d",&data1.math);

    /*出力*/
    printf("生徒コード%dさんの成績\n",data1.code);
    printf("国語：%d、数学：%d",data1.japanese,data1.math);
}