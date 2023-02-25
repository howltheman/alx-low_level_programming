#include "main.h"
/**
* print_alphabet  - print all alphabet in lowercase
*
* Description - this is the entry point for the program
*
* Return: Always 0
*/

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
