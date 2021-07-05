
#include "holberton.h"
#include <stdlib.h>
/**
* _strchr -  function to copy the memory to  a string
* @s: string source
* @c: value f character
* Return: string s and NULL
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
s++;
if (*s == c)
{
return (s);
}
}
return (NULL);
}
