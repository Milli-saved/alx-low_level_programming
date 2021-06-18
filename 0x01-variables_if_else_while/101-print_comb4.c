#include <stdio.h>
/**
* main - Print combinations of Three digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int hundreds;
int tens;
int ones;
for(hundreds = 0; hundreds <= 999; hundreds++)
{
for (tens = hundreds + 10; tens <= 99; tens++)
{
for (ones = tens + 1; ones <= 9; ones++)
{
putchar(hundreds + '0');
putchar(tens + '0');
putchar(ones + '0');
if (hundreds < 89)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
