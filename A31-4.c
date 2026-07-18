#include <stdio.h>

int ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' ||
           *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
        {
            return 1;
        }

        str++;
    }

    return 0;
}

int main()
{
    char arr[100];

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    if(ChkVowel(arr))
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}