#include <stdio.h>

/**
 *main : Entery point
 *
 *Return - Always 0 (success)
 *
 *
 * This function prints the alphabet in small and capital letters
 * using the putchar function.
 */

int main(){

char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
putchar(ch);

for (ch = 'A' ; ch <= 'Z' ; ch++)
putchar(ch);

  
putchar('\n');
return (0);
}
