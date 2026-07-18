#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x08204040;   // 7th,15th,21st,28th bits

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
        printf("All required bits are ON\n");
    else
        printf("One or more required bits are OFF\n");

    return 0;
}