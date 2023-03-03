#include "main.h"
#include <stdio.h>
/**
 * _strcat -  concatenates two strings.
 * @src : string to pay attention to
 * @dest :string to append to
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int i;
int dest_len = 0;
while (dest[dest_len] != '\0')
{
dest_len++;
}
i = 0;
while (src[i] != '\0')
{
dest[dest_len + i] = src[i];
i++;
}
dest[dest_len + i] = '\0';
return (dest);
}
