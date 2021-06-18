#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int l = n%10;
if(l>5){
printf("Last digit of %n is %l and is greater than 5",n,l);
}
else if(l==0){
printf("Last digit of %n is %l and is 0",n,l);
}
else if(l<6 && l!=0){
printf("Last digit of %n is %l and is less than 6 and not 0",n,l);
}
return (0);
}
