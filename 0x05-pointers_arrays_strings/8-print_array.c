
#include "holberton.h"
#include <stdio.h>
/**
 * print_array - writes the string in reverse
 * @a: pointer a, array
 * @n: element
 */
void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);
if (i < (n - 1))
{
printf(", ");
}
i++;
}
printf("\n");
}
