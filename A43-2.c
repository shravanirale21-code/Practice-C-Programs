#include <stdio.h>
#include <stdlib.h>

int CountSmall(char FName[])
{
    FILE *fp = NULL;
    char Data[1000];
    int i = 0;
    int iCount = 0;

    // Open file in read mode
    fp = fopen(FName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file\n");
        return -1;
    }

    // Read data into local array
    while((Data[i] = fgetc(fp)) != EOF && i < 999)
    {
        i++;
    }

    Data[i] = '\0';

    // Count small characters
    for(i = 0; Data[i] != '\0'; i++)
    {
        if(Data[i] >= 'a' && Data[i] <= 'z')
        {
            iCount++;
        }
    }

    // Close the file
    fclose(fp);

    // Return frequency
    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountSmall(FileName);

    if(iRet != -1)
    {
        printf("Number of small characters are %d\n", iRet);
    }

    return 0;
}