#include<stdio.h>
#include<stdbool.h>

bool checkchar(char str[],char ch)
{
    while(*str != '\0')
    {
    if(*str==ch)
    {
        return true;
    }
    str++;
    }
}
int main()
{
    char Arr[20];
    char cValue='\0';
    bool bRet=false;

    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character\n");
    scanf(" %c",&cValue);

    bRet=checkchar(Arr,cValue);

    if(bRet==true)
    {
        printf("Character found");
    }
    else 
    {
        printf("Character not found");
    }

    return 0;

}