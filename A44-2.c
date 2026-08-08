#include <stdio.h>
#include <stdlib.h>

int main()
{
    char FileName[30];
    FILE *fp = NULL;

    printf("Enter file name: ");
    scanf("%s", FileName);

    // Create file in write mode
    fp = fopen(FileName, "w");

    if(fp == NULL)
    {
        printf("Unable to create file.\n");
    }
    else
    {
        printf("File created successfully.\n");

        // Close the file
        fclose(fp);
    }

    return 0;
}