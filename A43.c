#include<stdio.h>

void NonFact(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=2;i<iNo;i++)
    {
        if(iNo%i !=0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter number :");
    scanf("%d\t",&iValue);

    NonFact(iValue);

    return 0;
}