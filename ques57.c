#include <stdio.h>
int main () {

int n , i , sum = 0 ;
printf("enter the number of elements : ") ;
scanf("%d" , &n) ;

int arr[n] ;

printf("enter %d elements : \n " , n );
for ( i = 0 ; i < n ; i++ ){
    scanf("%d" , &n) ;
}

//calculate sum of array elements 
for (i=0 ; i < n ; i++ ) {
    sum += arr[i] ;
}
//Print the sum 
printf("sum of array elements = %d\n" , sum ) ;

return 0 ; 

}