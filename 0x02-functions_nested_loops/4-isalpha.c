#include "holberton.h"
/**
 * _isalpha - found the lowercase and uppercase of a letter
 * @c: a letter
 * Return: always 0
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
