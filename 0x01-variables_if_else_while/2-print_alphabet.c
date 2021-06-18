#include <stdio.h>

/**
 * main - Entry point
 *
 * The function prints out a string
 *
 * Return: Always 0 (Success)
 */

int main(){

for(int x = 'A'; x<= 'Z'; x++){
int lower_case = tolower(x);
putchar(lower_case);
}
 putchar('\n');  
return 0;
}
