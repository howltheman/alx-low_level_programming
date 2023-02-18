#include <stdio.h>

/**
 * main - Entry point
 * Displays the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

/*Iterate through the alphabet from 'a' to 'z'*/
for (c = 'a'; c <= 'z'; c++)
{
/* Print each character using putchar*/
putchar(c);
}
putchar('\n');

/* Return 0 to indicate success*/
return (0);
}
