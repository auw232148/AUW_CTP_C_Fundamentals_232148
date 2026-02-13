#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float num = get_float("Enter a float: ");

    printf("%.2f\n", num);

    return 0;
}
