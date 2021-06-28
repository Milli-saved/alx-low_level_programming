#include "holberton.h"
/**
 * _strlen - function to length a string
 * @s: string
 * Return: str
 */
int _strlen(char *s)
{
int str;

str = 0;
while (s[str] != '\0')
++str;
{
return (str);
}
}
