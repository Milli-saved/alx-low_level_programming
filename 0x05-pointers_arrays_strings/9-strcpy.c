#include "holberton.h"
/**
 * _strcpy - function
 * @dest: pointer
 * @src: pinter
 * Return: diferent zero
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i] + '\0';
i++;
}
dest[i] = '\0';
return (dest);
}
