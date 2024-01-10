#include<stdio.h>
#include<stdbool.h>

bool chkdigit(char ch)
{
    if((ch>='0' && ch<='9' ))
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

    printf("enter digit\n");
    scanf("%c",&cValue);

    bRet=chkdigit(cValue);

    if(bRet==true)
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("It is not a digit\n");
    }

    return 0;
}