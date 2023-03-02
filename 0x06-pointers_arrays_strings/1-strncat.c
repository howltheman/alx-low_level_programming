#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strncat -concatenates two strings.
 *@src : string to pay attention to
 *@dest : string to append to
 *@n : the maximum number of bytes to copy from src.
 *_strncat return: src[n] + dest
*/
char *_strncat(char *dest, char *src, int n)
{
int  dest_len = strlen(dest);
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

dest[dest_len + i] = '\0';

return (dest);
}
