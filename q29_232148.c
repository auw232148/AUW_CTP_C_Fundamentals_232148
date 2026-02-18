#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");

    if (a > b)
    {
        printf("Largest = %d\n", a);
    }
    else if (b > a)
    {
        printf("Largest = %d\n", b);
    }
    else
    {
        printf("Both are Equal\n");
    }

    return 0;
}
