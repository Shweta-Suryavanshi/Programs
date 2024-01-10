#include<stdio.h>
#include<stdbool.h>

bool chksmall(char ch)
{
    if((ch>='a' && ch<='z' ))
    {
        return true;
    }
    else 
    {
        return false;
    }
}
    
int main()
{
   char cValue='\0';
   bool bRet=false;

    printf("enter character\n");
    scanf("%c",&cValue);

    bRet=chksmall(cValue);

    if(bRet==true)
    {
        printf("It is a small character\n");
    }
    else
    {
        printf("It is not a small character\n");
    }

    return 0;
}