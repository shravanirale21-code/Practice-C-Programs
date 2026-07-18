#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x00004000;   // 15th bit

    if ((iNo & iMask) == iMask)
        return TRUE;
    else
        return FALSE;
}

int main()
{
    UINT iValue = 0;

    printf("Enter number : ");
    scanf("%u", &iValue);

    if (ChkBit(iValue))
        printf("15th bit is ON\n");
    else
        printf("15th bit is OFF\n");

    return 0;
}