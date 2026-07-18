#include <stdio.h>

int main()
{
    int i;

    printf("Dec\tOct\tHex\tChar\n");
    printf("---------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%3d\t%03o\t%02X\t%c\n", i, i, i, (char)i);
    }

    return 0;
}