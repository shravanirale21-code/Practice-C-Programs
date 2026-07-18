#include <stdio.h>
#include <string.h>

void Reverse(char *str)
{
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[100];

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    Reverse(arr);

    printf("Reversed string = %s", arr);

    return 0;
}