#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d",Arr[iCnt]);
    }
    printf("\n");

}

int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;

    printf("Enter number of elements");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount*sizeof(int));

    printf("Enter the elements");

    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iCount);

    return 0;


}