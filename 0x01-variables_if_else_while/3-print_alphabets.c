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
for(int x = 'A';x<= 'Z';x++){
int lower_x = tolower(x);
putchar(lower_x);
}
for(int x = 'A';x<='Z';x++){
int upper_x = toupper(x);
putchar(upper_x);
}
putchar('\n');
return 0;
}
