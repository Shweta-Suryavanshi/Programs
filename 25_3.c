#include<stdio.h>

void Display(char ch)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=127;iCnt++)
    {
    if((ch>='A' && ch<='Z' ))
    {
        printf("%c\t",ch);
        ch++;
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c\t",ch);
        ch--;
    }
    else
    {
        printf(" ");
    }
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