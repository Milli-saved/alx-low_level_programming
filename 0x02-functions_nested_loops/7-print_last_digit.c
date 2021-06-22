
#include "holberton.h"
/**
 * print_last_digit - last digit
 * @num: integer
 * Return: always cero
 */
int print_last_digit(int num)
{
int digit;
digit = num % 10;
if (digit < 0)
{
_putchar(-digit + '0');
return (-digit);
}
else
{
_putchar(digit + '0');
return (digit);
}
}
