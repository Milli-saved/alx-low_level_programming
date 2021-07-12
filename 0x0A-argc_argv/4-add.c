#include <stdio.h>
#include <stdlib.h>
/**
 * checkInteger - checks if s is an integer
 * @s: string to check
 * Return: 0 or 1
 */
int checkInteger(const char *s)
{
int i = 0;
while(s[i] != '\0')
{
if(s[i] < '0' || s[i] > '9')
return (1);
i++;
}
return (0);

}
/**
 *main - adds poistive numbers
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
int sum = 0;
while(--argc)
{
if(checkInteger(argv[argc]))
{
printf("Error\n");
return (1);
}
sum += atoi(atgv[argc]);
}
printf("%i\n", sum);
return (0);
}
