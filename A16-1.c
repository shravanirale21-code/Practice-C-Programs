#include <stdio.h>
#include <stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int i = 0;
    int Max = Arr[0];

    for(i = 1; i < iLength; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    int iSize, i;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("Largest Number = %d\n", Maximum(p, iSize));

    free(p);

    return 0;
}