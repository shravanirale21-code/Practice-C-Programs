#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x000001C0;   // 7th,8th,9th bits

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
        printf("7th, 8th and 9th bits are ON\n");
    else
        printf("One or more bits are OFF\n");

    return 0;
}