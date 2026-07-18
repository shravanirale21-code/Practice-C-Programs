#include <stdio.h>

int CountSmall(char *str)
{
    int count = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    printf("Number of small letters = %d", CountSmall(arr));

    return 0;
}