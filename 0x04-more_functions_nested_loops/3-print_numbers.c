#include "holberton.h"
/**
 * print_numbers - function that prints numbers from 1 to 9
 * @void: no content
 */
void print_numbers(void)
{
int n;

for (n = 0; n <= 9; n++)
{
_putchar (n + '0');
}
_putchar ('\n');
}
