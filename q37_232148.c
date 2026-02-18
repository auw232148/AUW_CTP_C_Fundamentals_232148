#include <stdio.h>
#include <cs50.h>

int main ()
{
    int numbers[5];

    for (int i = 0; i < 5; i++)
    {
        numbers[i] = get_int("Enter number: ");
    }

    printf("You Entered: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");
    return 0;
}
