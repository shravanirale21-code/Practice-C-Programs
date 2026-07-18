#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = 1;

    iMask = iMask << (iPos - 1);
    iMask = ~iMask;

    return (iNo & iMask);
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iPos = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    printf("Enter position : ");
    scanf("%d",&iPos);

    iRet = OffBit(iValue,iPos);

    printf("Modified number : %u\n",iRet);

    return 0;
}