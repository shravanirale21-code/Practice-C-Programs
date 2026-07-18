#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int i;
    int iIndex = -1;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iIndex = i;
        }
    }

    return iIndex;
}

int main()
{
    int iSize = 0, i = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter number : ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements\n");

    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&p[i]);
    }

    iRet = LastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("Number not found");
    }
    else
    {
        printf("Last occurrence is : %d",iRet);
    }

    free(p);

    return 0;
}