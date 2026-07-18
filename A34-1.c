#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    StrCpyX(arr, brr);

    printf("Copied string is : %s\n", brr);

    return 0;
}