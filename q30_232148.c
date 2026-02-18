#include <stdio.h>
#include <cs50.h>
int main ()
{
    int a=get_int("Enter the first number: ");
    int b=get_int("Enter the second number: ");
    int c=get_int("Enter the first number: ");
    
    if (a >= b && a >= c)
    {
        printf("Largest = %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Largest = %d\n", b);
    }
    else
    {
        printf("Largest = %d\n", c);
    }

    return 0;
}
