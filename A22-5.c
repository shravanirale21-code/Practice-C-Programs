#include <stdio.h>

void Pattern(int iNo)
{
    int i = 1;

    while(i <= iNo)
    {
        printf("%d\t", i * 2);
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