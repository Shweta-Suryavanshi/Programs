#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        printf("Decimal %d\nOctal %o\nHexadecimal %x\n",ch,ch,ch);
    }
}
    
int main()
{
   char cValue='\0';
   

    printf("enter character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}