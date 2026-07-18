#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int i = 0, iCnt = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == 11)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int main()
{
    int iSize = 0, i = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(i = 0; i < iSize; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&p[i]);
    }

    iRet = Frequency(p,iSize);

    printf("Frequency of 11 = %d\n",iRet);

    free(p);

    return 0;
}