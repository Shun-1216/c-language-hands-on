#include <stdio.h>


/*構造体宣言*/
typedef struct
{
    int code,japanese,math;
    float average;
} student;

void calc(student *);

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

    /*計算*/
    calc(&data1);
    printf("平均点は%fです。",data1.average);

}

void calc(student *p_data1)
{
    (p_data1 -> average) = (float)(p_data1 -> japanese + p_data1 -> math ) / 2;
    /*出力*/
    printf("生徒コード%dさんの成績\n",p_data1->code);
    printf("国語：%d、数学：%d",p_data1->japanese,p_data1->math);

}