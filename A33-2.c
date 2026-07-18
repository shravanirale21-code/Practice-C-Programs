#include<stdio.h>

int CountChar(char *str, char ch)
{
    int count = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            count++;
        }
        str++;
    }

    return count;
}

int main()
{
    char arr[50];
    char cValue;
    int iRet;

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    printf("Enter character : ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n", iRet);

    return 0;
}