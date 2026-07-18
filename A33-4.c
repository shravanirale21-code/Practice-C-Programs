#include<stdio.h>

int LastChar(char *str, char ch)
{
    int index = 0;
    int last = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            last = index;
        }

        index++;
        str++;
    }

    return last;
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

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}