#include <stdio.h>
#include <stdlib.h>

int main()
{
    char FileName[30];
    char Str[100];
    FILE *fp = NULL;

    printf("Enter file name: ");
    scanf("%s", FileName);

    // Clear the newline left by scanf
    getchar();

    printf("Enter the string: ");
    fgets(Str, sizeof(Str), stdin);

    // Open file in append mode
    fp = fopen(FileName, "a");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 0;
    }

    // Write string at the end of file
    fputs(Str, fp);

    printf("Write %s at the end of %s file", Str, FileName);

    // Close the file
    fclose(fp);

    return 0;
}