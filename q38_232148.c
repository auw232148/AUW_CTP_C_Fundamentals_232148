#include <stdio.h>
#include <cs50.h>
int main ()
{
    int numbers[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        numbers[i] = get_int("Enter number: ");
        sum += numbers[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
