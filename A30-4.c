#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch=='!' || ch=='@' || ch=='#' || ch=='$' ||
       ch=='%' || ch=='^' || ch=='&' || ch=='*')
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}