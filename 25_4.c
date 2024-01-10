#include<stdio.h>
#include<stdbool.h>

bool chksymbol(char ch)
{
    if((ch>=33 && ch<=64 ))
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

    printf("enter symbol\n");
    scanf("%c",&cValue);

    bRet=chksymbol(cValue);

    if(bRet==true)
    {
        printf("It is a special character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }

    return 0;
}