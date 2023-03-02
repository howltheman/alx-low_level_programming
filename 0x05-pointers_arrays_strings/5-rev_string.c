#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string- prints a string in reverse
 * @s: pointer to the string to print
 *
 * This function takes a string as input and prints it in reverse
 * order, followed by a newline character.
 */
void rev_string(char *s)
{
int len = strlen(s);
int i;
for ( i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}

