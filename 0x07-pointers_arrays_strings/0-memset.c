#include "holberton.h"
/**
* _memset -  function to set the memory to  a string
* @s: string to fill with a constant b
* @b: bytes of memory pinted by s
* @n: numbers of bytes to set by b
* Return: no zero
*/
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n > 0)
{
*ptr = b;
ptr++;
n--;
}
return (s);
}
