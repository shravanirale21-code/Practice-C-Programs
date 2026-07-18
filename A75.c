#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i=0;
    int EvenFact=1;
    int OddFact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=2;i<=iNo;i=i+2)
    {
        EvenFact=EvenFact*i;
    }
     for(i=1;i<=iNo;i=i+2)
    {
        OddFact=OddFact*i;
    }
    return (EvenFact-OddFact);
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Difference between Even and Odd Factorial  is %d\n",iRet);

    return 0;
}