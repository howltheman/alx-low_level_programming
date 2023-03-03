#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings.
 * @s1 : string to be compared
 * @s2 : string to be compared
 *
 * Return:0 if s1 == s2, -1 if s1 < s2, 1 if s1 > s2
*/
int _strcmp(char *s1, char *s2)
{

int i = 0;

while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
{
i++;
}

if (s1[i] == s2[i])
{
return (0);
}
else if (s1[i] < s2[i])
{
return (-1);
}
else
{
return (1);
}
}
