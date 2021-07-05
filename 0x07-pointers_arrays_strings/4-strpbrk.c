#include "holberton.h"
#include <stdlib.h>
/**
* _strpbrk -  search a string for a set of bytes
* @s: string source
* @accept: value string accept
* Return: string s and NULL
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (NULL);
}
