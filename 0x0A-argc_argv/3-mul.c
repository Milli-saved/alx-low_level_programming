#include <stdio.h>

/**
 * main - print multiplication of two numbers
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argc[])
{
(void)argc;
if(argc != 3)
{
printf("Error\n");
return (1);
}
printf("%i\n",atoi(argv[1]) * atoi(argv[2]));
return (0);
}
