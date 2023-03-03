#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @src : string to pay attention to
 * @dest : string to append to
 * @n : the maximum number of bytes to copy from src.
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[i] != '\0')
{
dest[i] = dest[i] - src[j];
i++;
j++;
}
dest[i] = '\0'; 
return (dest);
}
