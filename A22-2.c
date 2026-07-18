#include <stdio.h>

void Pattern(int iNo)
{
    while(iNo >= 1)
    {
        printf("%d\t#\t", iNo);
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