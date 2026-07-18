#include <stdio.h>

int Difference(char *str)
{
    int small = 0, capital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            small++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            capital++;
        }

        str++;
    }

    return (small - capital);
}

int main()
{
    char arr[100];

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    printf("Difference = %d", Difference(arr));

    return 0;
}