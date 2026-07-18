#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }

        src++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    StrCpyCap(arr, brr);

    printf("Capital letters : %s\n", brr);

    return 0;
}