#include<stdio.h>

void StrNCpyX(char *src, char *dest, int icnt)
{
    while((*src != '\0') && (icnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        icnt--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];
    int iNo = 0;

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    printf("Enter number of characters : ");
    scanf("%d", &iNo);

    StrNCpyX(arr, brr, iNo);

    printf("Copied string is : %s\n", brr);

    return 0;
}