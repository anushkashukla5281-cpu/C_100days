#include <stdio.h>
int main () {
int n , i ; 
float numerator = 1 , denominator = 2 , sum = 0 ;

printf("enter number of terms : ") ; 
scanf("%d" , &n ) ; 

for ( i = 1 ; i <= n ; i++ ) {
sum = sum + (numerator / denominator) ;
numerator = numerator + 2 ;
// increase numerator by 2 each term 
denominator = denominator + 2 ;
//increase denominator by 2 each term ;


}
printf("sum of the series up to %d terms = %.2f\n" , n , sum);
return 0 ; 


}