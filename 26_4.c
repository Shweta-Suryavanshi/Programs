#include<stdio.h>
#include<stdbool.h>
bool chkVowel(char str[])
{
    
    while(*str != '\0')
    {
        if(*str=='a'|| *str=='e' || *str=='i' || *str=='o' || *str=='u' || *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
        {
            return true;
        }
        
        str++;
    }
    
    
}
int main()
{
    char Arr[20];
    bool bRet=false;

    printf("Enter string\n");
    scanf("%[^'\n]s",Arr);

    bRet=chkVowel(Arr);
    if(bRet==true)
    {
        printf("Contains vowel");
    }
    else
    {

        printf("Not contains vowel");
    }

    return 0;
}