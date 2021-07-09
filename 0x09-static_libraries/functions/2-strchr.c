#include "holberton.h"
#include <stddef.h>

/**
 * *_strchr - function that locates a character in a string
 * @s: string
 * @c: character to locate
 * Return: c
 */

char *_strchr(char *s, char c)
{

for (;; s++)
{
if (*s == c)
{
return (s);
}
if (*s == '\0')
{
return (NULL);
}
}
}
