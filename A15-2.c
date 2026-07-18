#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int i;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return i;
        }
    }

    return -1;
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

    iRet = FirstOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("Number not found");
    }
    else
    {
        printf("First occurrence is : %d",iRet);
    }

    free(p);

    return 0;
}