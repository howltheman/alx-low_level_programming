#include "main.h"
#include <unistd.h>
/**
 * _islower - checks if a character is lowercase
*@c: is the char to be checked
*
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{return 1;
}
else
{return 0;
}
}
