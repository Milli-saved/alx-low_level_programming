#include "holberton.h"
/**
 * _isupper - check uppercase
 * @c: variable of a letter 
 * Return: 1 if upper else always 0
 */
int _isupper(int c)
{
if(c>=65 && c<=90)
{
return (1);
}
else
{
return (0);
}
}
