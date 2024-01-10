#include<stdio.h>
void Display(char *str)
{
    while(*str != 0)
    {
    if(*str>='0' && *str<='9')
    {
        printf("%c",*str);
    }
    str++;
    }
}
int main()
{
    char Arr[20];

    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    
    return 0;

}