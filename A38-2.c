#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iMask = iNo1 & iNo2;
    int iPos = 1;

    while(iMask != 0)
    {
        if((iMask & 1) == 1)
        {
            printf("%d ",iPos);
        }

        iMask = iMask >> 1;
        iPos++;
    }
}

int main()
{
    UINT iValue1,iValue2;

    printf("Enter first number : ");
    scanf("%u",&iValue1);

    printf("Enter second number : ");
    scanf("%u",&iValue2);

    printf("Common ON bit positions are : ");
    CommonBits(iValue1,iValue2);

    return 0;
}