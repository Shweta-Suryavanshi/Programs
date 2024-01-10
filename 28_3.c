#include<stdio.h>
int firstindex(char *str, char ch)
{
    int iCnt=0;
    for(iCnt=0;str[iCnt]!='\0';iCnt++)
    {
           if(str[iCnt]==ch)
           {
            return iCnt;
           }
    }
    return -1;
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

    iRet=firstindex(Arr,cValue);
    if(iRet==-1)
    {
        printf("%c is not found\n",cValue);
    }
    else
    {
        printf("first index of character %c is %d ",cValue,iRet);
    }

    return 0;

}