#include <stdio.h>
#include <stdlib.h>

int main()
{
    char FileName[30];
    FILE *fp = NULL;
    long int iSize;

    printf("Enter file name: ");
    scanf("%s", FileName);

    // Open file in read mode
    fp = fopen(FileName, "rb");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 0;
    }

    // Move file pointer to the end
    fseek(fp, 0, SEEK_END);

    // Get current position of file pointer
    iSize = ftell(fp);

    printf("File size is %ld bytes\n", iSize);

    // Close the file
    fclose(fp);

    return 0;
}