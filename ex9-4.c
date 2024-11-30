#include <stdio.h>

int inputdata(int *);
int outputdata(int *);

void main()
{
    /*変数宣言*/
    int array[5];

    inputdata(array);
    outputdata(array);

}

int inputdata(int *array)
{   int i;
    for(i=0;i<5;i++)
    {
        printf("%d番目のデータを入力してください。",i+1);
        fflush(stdout);
        scanf("%d",(array + i));
    }
}

int outputdata(int *array)
{   int i;
    for(i=0;i<5;i++)
    {
        printf("array[%d] = %d\n",i,*(array + i));
    }
}