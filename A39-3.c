#include <stdio.h>

void Display(int n)
{
    if(n == 0)
        return;

    printf("%d ", n);
    Display(n - 1);
}

int main()
{
    Display(5);

    return 0;
}