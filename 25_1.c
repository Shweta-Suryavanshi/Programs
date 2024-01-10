#include<stdio.h>
#include<stdbool.h>

void Display()
{
    int iCnt=0;
    for(iCnt=0;iCnt<=127;iCnt++)
    {
    printf("%d\t%x\t%o\t%c\n",iCnt,iCnt,iCnt,iCnt);
    }
}
    
int main()
{
   Display();

    return 0;
}


