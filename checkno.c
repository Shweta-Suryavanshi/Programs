#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define true 1
#define false 0

bool check(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int iCount=0,iCnt=0,iValue=0;
    int *ptr=NULL;
    bool bRet=false;

    printf("Enter number of elements\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount*sizeof(int));

    printf("Enter the elements\n");
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("Enter %d element\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter number of which you to count frequency");
    scanf("%d",&iValue);
    
    bRet=check(ptr,iCount,iValue);

    if(bRet == true)
    {
        printf("%d is present",iValue);
    }
    else
    {
        printf("%d is absent",iValue);
    }
    free(ptr);
    return 0;

}