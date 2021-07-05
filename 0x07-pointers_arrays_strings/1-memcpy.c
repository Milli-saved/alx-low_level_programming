#include "holberton.h"
/**
* _memcpy -  function to copy the memory to  a string
* @dest: string dest
* @src: string source
* @n: numbers of bytes to set by b
* Return: no zero
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
char *t1 = src;
char *t2 = dest;

while (i < n)
{
*t2 = *t1;
i++;
t1++;
t2++;
}
return (dest);
}
