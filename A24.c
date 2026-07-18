#include<stdio.h>

void Display( int iNo ,int iFrequency)
{
    int i=0; 

    if(iFrequency <0)
    {
        iFrequency=-iFrequency;
    }
    for(i=1;i<=iFrequency;i++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue=0;
    int iFreq=0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter frequency");
    scanf("%d",&iFreq);

    Display(iValue,iFreq);

    return 0;
}