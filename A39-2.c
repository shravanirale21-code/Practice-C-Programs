#include <stdio.h>

void Display(int n)
{
    if(n > 5)
        return;

    printf("%d ", n);
    Display(n + 1);
}

int main()
{
    Display(1);

    return 0;
}