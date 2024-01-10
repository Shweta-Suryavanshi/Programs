#include<stdio.h>

void chktime(char ch)
{
    switch(ch)
    {
    case 'A':
    printf("Exam time is 7AM");
    break;
    case 'a':
    printf("Exam time is 7AM");
    break;
    case 'B' :
    printf("Exam time is 8:30AM");
    break;
    case 'b' :
    printf("Exam time is 8:30AM");
    break;
    case 'C':
    printf("Exam time is 9:20AM");
    break;
    case 'c':
    printf("Exam time is 9:20AM");
    break;
    case 'D':
    printf("Exam time is 10:30AM");
    break;
    case 'd':
    printf("Exam time is 10:30AM");
    break;
    default:
    printf("There is no such division");

    }


}
    
int main()
{
   char cValue='\0';

    printf("enter division\n");
    scanf("%c",&cValue);

    chktime(cValue);

    return 0;
}