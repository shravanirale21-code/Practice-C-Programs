#include <stdio.h>
#include <stdlib.h>

int CountChar(char FName[], char Ch)
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

    // Count occurrences of Ch
    for(i = 0; Data[i] != '\0'; i++)
    {
        if(Data[i] == Ch)
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
    char cValue;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = CountChar(FileName, cValue);

    if(iRet != -1)
    {
        printf("Frequency of %c is %d\n", cValue, iRet);
    }

    return 0;
}