#include <stdio.h>
/**
 *
 * main - Entery point
 *
 * Return : Always 0 (success)
 *
 * This function prints the alphabet with out q and e.
 */

int main(){
for(int x = 'A';x<= 'Z';x++){
if(x!='Q' && x!='E'){
int lower_x = tolower(x);
putchar(lower_x);
}
}  
putchar('\n');
return 0;
}
