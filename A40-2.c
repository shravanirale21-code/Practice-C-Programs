#include <stdio.h>

void Display(int iNo)
{
    // Base condition
    if(iNo <= 0)
    {
        return;
    }

    // Recursive call
    Display(iNo - 1);

    // Display number
    printf("%d\t", iNo);
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}