#include "main.h"

/**
 * main -prints the alphabet, in lowercase, followed by a new line.
 *
 * Description: This is the entry point of the program
 *
 * Return: Always 0
 */

void print_alphabet(void);
{char c;
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
