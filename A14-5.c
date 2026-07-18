#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int i = 0, iCnt = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int main()
{
    int iSize = 0, i = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the number : ");
    scanf("%d",&iValue);

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

    iRet = Frequency(p,iSize,iValue);

    printf("Frequency of %d = %d\n",iValue,iRet);

    free(p);

    return 0;
}