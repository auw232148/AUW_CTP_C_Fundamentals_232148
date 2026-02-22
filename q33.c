#include <stdio.h>
#include <cs50.h>
void check_even(int n);
int main()
{
    int number = get_int ("Enter a number: ");
    check_even(number);
}

void check_even(int n);
{
    if (n%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
