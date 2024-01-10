#include<stdio.h>
int reverse(char *str)
{
    int iCnt=0;
    int len=0;
    char temp='\0';

    while(str[iCnt]!='\0')
    {
        iCnt++;
    }
    len=iCnt-1;
    iCnt=0;

    while(iCnt<len/2)
    {
        temp=str[iCnt];
        str[iCnt]=str[len-iCnt];
        str[len-iCnt]=temp;
    }
    return temp;
}
int main()
{
    char Arr[20];
    char cValue='\0';
    char iRet='\0';

    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);

    iRet=reverse(Arr);

    printf("reverse string is %s ",iRet);

    return 0;

}