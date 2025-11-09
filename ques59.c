#include <stdio.h>
int main () {
 int n , i ;
 int even = 0 , odd = 0 ; //counters 

 printf("enter the number of elements : ");
 scanf("%d" , &n) ;
 int arr[n];

 printf("enter %d elements : \n" , n );
 for (i=0 ; i < n ; i++) {
    scanf("%d" , &arr[i]);
 }
// count even and odd elements 
for( i=0 ; i < n ; i++ ) {
if (arr[i] % 2 == 0 )
even ++ ;
else 
odd++ ;
}
// display results 
printf("total even numbers = %d\n" , even ) ;
printf("total odd numbers = %d\n" , odd );

return 0 ;


}


































}