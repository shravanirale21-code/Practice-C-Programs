#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i;

    printf("Elements in range are : ");

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] >= iStart) && (Arr[i] <= iEnd))
        {
            printf("%d ",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, i = 0;
    int iStart = 0, iEnd = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter starting point : ");
    scanf("%d",&iStart);

    printf("Enter ending point : ");
    scanf("%d",&iEnd);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements\n");

    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&p[i]);
    }

    Range(p,iSize,iStart,iEnd);

    free(p);

    return 0;
}