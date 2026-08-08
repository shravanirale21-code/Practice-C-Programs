#include <stdio.h>

int Max(int iNo)
{
    int iDigit;
    int iMax;

    if(iNo < 10)
        return iNo;

    iDigit = iNo % 10;
    iMax = Max(iNo / 10);

    if(iDigit > iMax)
        return iDigit;
    else
        return iMax;
}

int main()
{
    int iNo;
    int iRet;

    printf("Enter number: ");
    scanf("%d", &iNo);

    iRet = Max(iNo);

    printf("Largest digit = %d\n", iRet);

    return 0;
}