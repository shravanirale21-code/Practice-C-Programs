#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i;
    int Max = Arr[0];
    int Min = Arr[0];

    for(i = 1; i < iLength; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }

        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }

    return (Max - Min);
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

    printf("Difference = %d\n", Difference(p,iSize));

    free(p);

    return 0;
}