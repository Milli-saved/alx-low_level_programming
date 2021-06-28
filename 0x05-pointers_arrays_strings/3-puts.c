#include "holberton.h"
/**
 * _puts - writes the string str and a trailing newline to stdout
 * @str: string
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
