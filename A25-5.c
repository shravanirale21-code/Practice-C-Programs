#include <stdio.h>

int main()
{
    int iRow, iCol;
    int i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &iRow, &iCol);

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", i + j - 1);
        }

        printf("\n");
    }

    return 0;
}