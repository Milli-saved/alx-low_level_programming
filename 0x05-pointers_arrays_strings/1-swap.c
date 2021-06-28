 #include "holberton.h"

/**
 * swap_int - swaps the value of two pointers
 *
 *
 * @a: pointer to an integer
 * @b: pointer to another integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
