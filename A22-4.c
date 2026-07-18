#include <stdio.h>

void Pattern(int iNo)
{
    int i = 1;

    while(i <= iNo)
    {
        printf("#\t%d\t*\t", i);
        i++;
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