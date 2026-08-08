#include <stdio.h>

int Reverse(int iNo)
{
    static int iRev = 0;

    // Base condition
    if(iNo == 0)
    {
        return iRev;
    }

    // Add last digit to reverse
    iRev = (iRev * 10) + (iNo % 10);

    // Recursive call
    return Reverse(iNo / 10);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);

    printf("Reverse number is: %d\n", iRet);

    return 0;
}