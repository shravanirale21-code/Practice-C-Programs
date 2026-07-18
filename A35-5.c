#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x80000001;   // 1st and 32nd bits

    if ((iNo & iMask) == iMask)
        return TRUE;
    else
        return FALSE;
}

int main()
{
    UINT iValue;

    printf("Enter number : ");
    scanf("%u", &iValue);

    if (ChkBit(iValue))
        printf("First and Last bits are ON\n");
    else
        printf("First and/or Last bit is OFF\n");

    return 0;
}