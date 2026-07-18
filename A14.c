#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define False 0

BOOL Check(int iNo)
{
    if((iNo%5)==0)
    {
        int iValue=0;
        BOOL bRet=False;

        printf("Enter value");
        scanf("%d",&iValue);

        bRet=Check(iValue);

        if(bRet==TRUE)
        {

            printf("Divisible by 5");
        }
        else{
            printf("Not Divisible by 5");
        }
    }
    return 0;
}