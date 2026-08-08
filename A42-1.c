#include <stdio.h>

int WhiteSpace(char *str)
{
    if(*str == '\0')
        return 0;

    if(*str == ' ')
        return 1 + WhiteSpace(str + 1);

    return WhiteSpace(str + 1);
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    printf("Number of white spaces = %d\n", WhiteSpace(str));

    return 0;
}