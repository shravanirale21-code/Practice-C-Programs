#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int i;
    int iProduct = 1;
    int iCount = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iProduct = iProduct * Arr[i];
            iCount++;
        }
    }

    if(iCount == 0)
    {
        return 0;
    }

    return iProduct;
}

int main()
{
    int iSize = 0, i = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements\n");

    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&p[i]);
    }

    iRet = Product(p,iSize);

    printf("Product of odd elements is : %d",iRet);

    free(p);

    return 0;
}