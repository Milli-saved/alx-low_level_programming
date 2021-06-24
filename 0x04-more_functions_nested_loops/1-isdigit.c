#include "holberton.h"
/**
 * _isdigit - function to check a number
 * @c: is a number
 * Return: always 0.
 */
int _isdigit(int c)
{
if(c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
