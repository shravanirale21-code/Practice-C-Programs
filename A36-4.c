#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000240;    // 7th and 10th

    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%u", &iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number : %u\n", iRet);

    return 0;
}