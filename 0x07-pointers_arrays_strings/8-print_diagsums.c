#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_diagsums - function for print a chessboard
* @a: pointer to chess
* @size: tamaño square
* Return: void
*/
void print_diagsums(int *a, int size)
{
int i, suma1 = 0, suma2 = 0, m;

m = size * size;
for (i = 0; i < m; i++)
{
if (i % (size + 1) == 0)
{
suma1 += a[i];
}
}
for (i = m - size ; i > 0; i--)
{
if (i % (size - 1) == 0)
{
suma2 += a[i];
}
}
printf("%d, %d\n", suma1, suma2);
}
