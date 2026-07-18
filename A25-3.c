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
            char ch = 'a';

            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t", ch);
                ch++;
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);
            }
        }

        printf("\n");
    }

    return 0;
}