#include <stdio.h>
#include <cs50.h>
int main ()
{
    int num=get_int("Enter number: ");

    if (num > 0)
    {
        printf("Positive\n");
    }
    else if (num < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }

    return 0;
}
