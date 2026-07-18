#include<stdio.h>

int FactDiff(int iNo)
{
    int i=0;
    int iFactSum=0;
    int iNonFactSum=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=1;i<iNo;i++)
    {
        if(iNo%i ==0)
        {
            iFactSum=iFactSum+i;
        }
        else
        {
            iNonFactSum=iNonFactSum+i;
        }
    }
    return (iFactSum-iNonFactSum);
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number :");
    scanf("%d\t",&iValue);

    iRet= FactDiff(iValue);

    printf("%d\n",iRet);

    return 0;
}