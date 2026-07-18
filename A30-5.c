#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Character  : %c\n", ch);
    printf("Decimal    : %d\n", ch);
    printf("Octal      : %o\n", ch);
    printf("Hexadecimal: 0x%X\n", ch);

    return 0;
}