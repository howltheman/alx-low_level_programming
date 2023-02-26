#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to get the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

if (n < 0)  /* If n is negative, make it positive */
n = -n;

last_digit = n % 10;  /* Get the last digit of n */

_putchar(last_digit + '0');  /* Print the last digit */

return (last_digit);
}
