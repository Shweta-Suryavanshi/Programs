//program to find minimum element from the array.
#include<stdio.h>
#include<stdlib.h>
int max(int Arr[],int iSize)
{
    int iCnt=0;
    int min=Arr[0];
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]< min)
        {
            //return Arr[iCnt];
           min= Arr[iCnt];
        }
        
    }
    return min;
    
}
int main()
{
    int iCount=0,iCnt=0,iRet=0,iValue1=0,iValue2;
    int *ptr=NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount*sizeof(int));

    printf("Enter the elements\n");
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("Enter %d element\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    
    
    iRet=max(ptr,iCount);
    printf("minimum of elements is: %d",iRet);

    return 0;

}