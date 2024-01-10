#include<stdio.h>
void Reverse(char str[])
{
    int iCnt=0;
    int len=0;
    char temp;
    while(str[iCnt] != '\0')
    {
            iCnt++;
    }
    len=iCnt-1;
    iCnt=0;
    while(iCnt<len/2)
    {
        temp = str[iCnt];
        str[iCnt]=str[len-iCnt];
        str[len-iCnt]=temp;
        iCnt++;
    }
    printf("The reverse string is:\n");
    printf("%s",str);
    
}
int main()
{
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n]s",Arr);

    Reverse(Arr);
    
    return 0;
}