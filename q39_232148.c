#include <stdio.h>
#include <cs50.h>
int main()
{
    int numbers[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        numbers[i] = get_int("Enter number: ");
        sum += numbers[i];
    }

    float average = sum / 5.0;

    printf("Average = %.2f\n", average);

    return 0;
}
