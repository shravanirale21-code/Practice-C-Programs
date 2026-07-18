#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int i = 0;

    printf("Multiples of 11 are :\n");

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 11) == 0)
        {
            printf("%d\t",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, i = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(i = 0; i < iSize; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&p[i]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}