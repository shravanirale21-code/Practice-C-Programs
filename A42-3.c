#include <stdio.h>

int Small(char *str)
{
    if(*str == '\0')
        return 0;

    if(*str >= 'a' && *str <= 'z')
        return 1 + Small(str + 1);

    return Small(str + 1);
}

int main()
{
    char str[100];
    int iRet;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    iRet = Small(str);

    printf("Number of small characters = %d\n", iRet);

    return 0;
}