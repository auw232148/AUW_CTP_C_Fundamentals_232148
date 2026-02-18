#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = get_int("Enter number: ");

    if (num >= 1 && num <= 100)
    {
        printf("In Range\n");
    }
    else
    {
        printf("Out of Range\n");
    }

    return 0;
}
