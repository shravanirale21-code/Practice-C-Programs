#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x00020010;   // 5th + 18th bit

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
        printf("5th and 18th bits are ON\n");
    else
        printf("5th and 18th bits are OFF\n");

    return 0;
}