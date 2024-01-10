#include<stdio.h>
int count(char str[])
{
    int iCnt1=0;
    int iCnt2=0;
    while(*str != '\0')
    {
        if(*str>='A'&& *str<='Z')
        {
            iCnt1++;
        }
        else if(*str>='a' && *str<='z')
        {
            iCnt2++;
        }
        str++;
    }
    return iCnt2-iCnt1;
}
int main()
{
    char Arr[20];

    int iRet=0;

    printf("Enter string\n");
    scanf("%[^'\n]s",Arr);

    iRet=count(Arr);
    printf("Numer of diffetence between capital and small characters is %d\n",iRet);

    return 0;
}