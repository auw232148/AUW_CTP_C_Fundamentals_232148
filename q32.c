#include <stdio.h>
#include <cs50.h>
int add(int a, int b);
int main()
{
    int x = get_int("Enter first number: ");
    int y = get_int("Enter second number: ");
    int result = add(x, y);
    printf("Sum: %i\n", result);

}
 int add (int a, int b)
{
    int result;
    result = a +b;
    return result;
    //return a+b;
}
