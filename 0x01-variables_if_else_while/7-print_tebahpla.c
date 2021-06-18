#include <stdio.h>

/**
 * main - Entery point
 *
 * Return : Always 0 (success)
 *
 *  This function prints small letter alphabets in the reverse order
 */

int main(){

for(int x='Z';x>='A';x--){
int lower_case = tolower(x);
putchar(lower_case);
}
putchar('\n');
  
return 0;
}
