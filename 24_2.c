#include<stdio.h>
#include<stdbool.h>

bool chkCapital(char ch)
{
    if((ch>='A' && ch<='Z' ))
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

    bRet=chkCapital(cValue);

    if(bRet==true)
    {
        printf("It is a capital character\n");
    }
    else
    {
        printf("It is not a capital character\n");
    }

    return 0;
}


