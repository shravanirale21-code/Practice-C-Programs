#include <stdio.h>

void Display(int iNo)
{
    // Base condition
    if(iNo <= 0)
    {
        return;
    }

    // Display star
    printf("*\t");

    // Recursive call
    Display(iNo - 1);
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}