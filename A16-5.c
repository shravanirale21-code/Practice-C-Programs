#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int i, No, Sum, Digit;

    printf("Sum of digits:\n");

    for(i = 0; i < iLength; i++)
    {
        No = Arr[i];
        Sum = 0;

        while(No != 0)
        {
            Digit = No % 10;
            Sum = Sum + Digit;
            No = No / 10;
        }

        printf("%d ", Sum);
    }

    printf("\n");
}

int main()
{
    int iSize, i;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&p[i]);
    }

    DigitsSum(p,iSize);

    free(p);

    return 0;
}