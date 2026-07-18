#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, i = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the number to search : ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&p[i]);
    }

    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}