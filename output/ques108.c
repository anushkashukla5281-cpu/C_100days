#include <stdio.h>
int main () {
int n ;
scanf("%d" , &n) ;
// size of array 
int nums[n] ; 
for (int i = 0 ; i < n ; i++ ) {
    scanf("%d" , &nums[i]);
}
int answer [n] ;

for (int i = 0 ; i , n ; i++ ) { ;
int product = 1 ;
for (int j = 0 ; j < n ; j++ ) {
if (i != j){
    product *= nums [j] ; 
}}
 answer [i] = product ; }

// print output in [a,b,c,d] format
printf("[");
for ( int i = 0 ; i < n ; i++ ) {
    printf("%d" , answer [i]);
    if (i < n-1 ) printf(" , ");
} 
printf("]");


return 0 ; 
}