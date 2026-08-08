#include <stdio.h>
#include <stdlib.h>

int main()
{
    char FileName[30];
    FILE *fp = NULL;
    char ch;

    printf("Enter file name: ");
    scanf("%s", FileName);

    // Open file in read mode
    fp = fopen(FileName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 0;
    }

    printf("Data of file is:\n");

    // Read and display all characters
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}