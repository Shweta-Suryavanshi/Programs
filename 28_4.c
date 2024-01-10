/*#include<stdio.h>
int lastindex(char *str, char ch)
{
    int index=-1;
    int iCnt=0;
    for(iCnt=0;str[iCnt]!='\0';iCnt++)
    {
           if(str[iCnt]==ch)
           {
             index=iCnt;
           }
           return index;
    }
    return -1;
}
int main()
{
    char Arr[20];
    char cValue='\0';
    int iRet=0;

    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character: \n");
    scanf(" %c",&cValue);

    iRet=lastindex(Arr,cValue);
    if(iRet==-1)
    {
        printf("%c is not found\n",cValue);
    }
    else
    {
        printf("last index of character %c is %d ",cValue,iRet);
    }

    return 0;

}*/
#include<stdio.h>
int findLastIndex(char str[], char ch) 
{int index = -1; 
for (int i = 0; str[i] != '\0' ; i++) 
if (str[i] == ch) 
index = i; 
return index; 
}
int main() 
{
char str[90];
    printf("Enter The String\n") ;
     fgets(str, sizeof str, stdin) ;
char x ;
    printf("Enter The Character\n") ;
    scanf("%c", &x) ;
int result = findLastIndex(str, x); 
if (result == -1) 
    {
printf("Character not found"); 
      }
else 
     {
printf("Last index is %d",result); 
       }
return 0; 
}