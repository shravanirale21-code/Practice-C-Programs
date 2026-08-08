#include <stdio.h>
#include <stdlib.h>

int main()
{
    char FileName[30];
    FILE *fp = NULL;

    printf("Enter file name: ");
    scanf("%s", FileName);

    // Open file in read mode
    fp = fopen(FileName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
    }
    else
    {
        printf("File opened successfully.\n");

        // Close the file
        fclose(fp);
    }

    return 0;
}