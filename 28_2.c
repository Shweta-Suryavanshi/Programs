#include<stdio.h>
int countchar(char *str, char ch)
{
    int iCnt=0;
    while(*str != '\0')
    {
        if(*str==ch)
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
    char cValue='\0';
    int iRet=0;

    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character: \n");
    scanf(" %c",&cValue);

    iRet=countchar(Arr,cValue);

    printf("number of character %c is %d ",cValue,iRet);

    return 0;

}