#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;
    int i;

    for(i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }

    return (iNo ^ iMask);
}

int main()
{
    UINT iValue,iRet;
    int iStart,iEnd;

    printf("Enter number : ");
    scanf("%u",&iValue);

    printf("Enter starting position : ");
    scanf("%d",&iStart);

    printf("Enter ending position : ");
    scanf("%d",&iEnd);

    iRet = ToggleBitRange(iValue,iStart,iEnd);

    printf("Modified number : %u\n",iRet);

    return 0;
}