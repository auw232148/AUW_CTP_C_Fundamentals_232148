#include <stdio.h>
#include <cs50.h>
int main ()
{
    int numbers[5];

    for (int i = 0; i < 5; i++)
    {
        numbers[i] = get_int("Enter number: ");
    }

    int largest = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    printf("Largest = %d\n", largest);

    return 0;
}
