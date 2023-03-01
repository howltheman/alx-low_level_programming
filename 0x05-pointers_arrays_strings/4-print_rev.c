#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to print
 *
 * Description: This function takes a string as input and prints it in reverse
 * order, followed by a newline character.
 */
void print_rev(char *s)
{
int len = strlen(s);
int i;
for (i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
