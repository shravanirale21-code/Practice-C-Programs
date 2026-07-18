#include <stdio.h>

int CountCapital(char *str)
{
    int count = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            count++;
        }
        str++;
    }

    return count;
}

int main()
{
    char arr[100];

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    printf("Number of capital letters = %d", CountCapital(arr));

    return 0;
}