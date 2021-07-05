#include "holberton.h"
#include <stdlib.h>
/**
* _strstr -  search a string for a set of bytes
* @haystack:string source
* @needle: value string accept
* Return: string needle and NULL
*/
char *_strstr(char *haystack, char *needle)
{
int n;

for (n = 0; haystack[n] != '\0'; haystack++)
{
while (haystack[n] && needle[n] != '\0' && haystack[n] == needle[n])
{
n++;
}
if (!needle[n])
return (haystack);
}
return (NULL);
}
