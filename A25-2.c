#include <stdio.h>

int main()
{
    int iRow, iCol;
    int i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &iRow, &iCol);

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)
        {
            for(j = 2; j <= 2 * iCol; j += 2)
            {
                printf("%d\t", j);
            }
        }
        else
        {
            for(j = 1; j <= (2 * iCol) - 1; j += 2)
            {
                printf("%d\t", j);
            }
        }

        printf("\n");
    }

    return 0;
}