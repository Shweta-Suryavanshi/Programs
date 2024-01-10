#include<stdio.h>
void Pattern(int iNo1)
{
    int i=0;
    int j=0;
    for(i=1;i<=iNo1;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("*\t");
        }

        printf("\n");
        
        
    }
}
    
int main()
{
    int iValue1=0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

    Pattern(iValue1);

    return 0;
}