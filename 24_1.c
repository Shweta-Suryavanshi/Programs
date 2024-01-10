#include<stdio.h>
#include<stdbool.h>

bool chkAlpha(char ch)
{
    if((ch>='A' && ch<='Z' )||( ch<='a' && ch<='z'))
    {
        return false;
    }
    else 
    {
        return true;
    }
}
    
int main()
{
   char cValue='\0';
   bool bRet=false;

    printf("enter character\n");
    scanf("%c",&cValue);

    bRet=chkAlpha(cValue);

    if(bRet==true)
    {
        printf("It is a character\n");
    }
    else
    {
        printf("It is not a character\n");
    }

    return 0;
}


