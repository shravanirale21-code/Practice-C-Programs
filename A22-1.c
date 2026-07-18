#include <stdio.h>

void Pattern(int iNo)
{
    char ch = 'A';

    while(iNo > 0)
    {
        printf("%c\t", ch);
        ch++;
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}