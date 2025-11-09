#include <stdio.h>
 int main () {
int n , i ; 
float sum = 0.0 ;
int numerator = 2 , denominator = 3 ;
printf("enter number of terms : ") ; 
scanf("%d" , &n );

for ( i = 1 ; i <= n ; i++ ) {
sum += (float) numerator / denominator ; 
numerator += 2 ; //increase by 2 
denominator +=  4 ; //increase by 4   

}
printf("sum of the series up to %d terms = %.2f\n" , n , sum );

return 0 ; 



 }