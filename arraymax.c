//program to find maximum element from the array.
#include<stdio.h>
#include<stdlib.h>
int max(int Arr[],int iSize)
{
    int iCnt=0;
    int max=Arr[0];
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]> max)
        {
            //return Arr[iCnt];
           max= Arr[iCnt];
        }
        
    }
    return max;
    
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
    printf("Maximum of elements is: %d",iRet);

    return 0;

}