#include <stdio.h>
#include <stdlib.h>

void DisplayN(char FName[], int iSize)
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
        return;
    }

    // Read data into local array
    while((Data[i] = fgetc(fp)) != EOF && i < 999)
    {
        i++;
    }

    Data[i] = '\0';

    // Display first N characters
    for(iCount = 0; iCount < iSize && Data[iCount] != '\0'; iCount++)
    {
        printf("%c", Data[iCount]);
    }

    printf("\n");

    // Close the file
    fclose(fp);
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the number of characters: ");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}