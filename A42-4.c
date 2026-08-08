#include <stdio.h>

int Min(int iNo)
{
    int iDigit = 0;
    int iMin = 0;

    // Base condition
    if(iNo == 0)
    {
        return 9;
    }

    // Extract last digit
    iDigit = iNo % 10;

    // Recursive call
    iMin = Min(iNo / 10);

    // Compare current digit with minimum
    if(iDigit < iMin)
    {
        return iDigit;
    }
    else
    {
        return iMin;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Min(iValue);

    printf("Smallest digit is: %d\n", iRet);

    return 0;
}