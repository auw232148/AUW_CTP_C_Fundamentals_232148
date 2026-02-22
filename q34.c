#include <stdio.h>
#include <cs50.h>

int find_max(int a, int b);
int main( )
{
    int x = get_int("Enter first number: ");
    int y = get_int("Enter second number: ");

    int max = find_max(x, y);

    printf("Max = %d\n", max);

    return 0;
}

int find_max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
