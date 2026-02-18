#include <stdio.h>
#include <cs50.h>
int main ()
{
    int num = get_int("Enter number: ");

    if (num == 0)
    {
        printf("Zero\n");
    }
    else if (num % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    return 0;
}
