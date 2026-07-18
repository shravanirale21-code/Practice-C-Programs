#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i;

    printf("Three digit numbers are:\n");

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] >= 100 && Arr[i] <= 999)
        {
            printf("%d ", Arr[i]);
        }
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

    Digits(p,iSize);

    free(p);

    return 0;
}