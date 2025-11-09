//  factorial 

#include <stdio.h>
int main () {
    int n , i ;
long long factorial = 1 ;

printf ("enter a number : ");
scanf("%d" , &n );

if ( n< 0 ) { 
    printf(" kindly enter a valid number ! ");
}
else {
for ( i = 1 ; i <= n ; i++ ){
    factorial *= i ;
}
printf("factorial of %d = %lld\n " , n , factorial);

}}