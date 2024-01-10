#include<stdio.h>
int countspace(char *str)
{
    int iCnt=0;
    while(*str != 0)
    {
    if(*str==' ')
    {
        iCnt++;
    }
    str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);

    iRet=countspace(Arr);

    printf("number of white space is %d ",iRet);

    return 0;

}