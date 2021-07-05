#include "holberton.h"
#include <stdlib.h>
/**
* _strspn -  search a string for a set of bytes
* @s: string source
* @accept: value string accept
* Return: string s and NULL
*/
unsigned int _strspn(char *s, char *accept)

{
unsigned int i;
unsigned int j;
unsigned  int n = 0;

for (i = 0; s[i]; i++)
{
if (n != i)
{
break;
}
for (j = 0; accept[j]; j++)
{
if (accept[j] == s[i])
{
n++;
}
}
}
return (n);
}
