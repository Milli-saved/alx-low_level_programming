
#include "holberton.h"
/**
 * print_rev - writes the string in reverse
 * @s: string
 */
void print_rev(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}
i = i - 1;
while (i >= 0)
{
--;
s--;
_putchar(*s);
}
_putchar('\n');
}
