#include <stdio.h>
int main () {
int n , i ; 
printf("enter the number of elements : ");
scanf("%d" , &n ) ;

int arr[n] ;// declare array 

printf("enter %d elements : \n " , n );
for (i=0 ; i < n ; i++ ) {
    scanf("%d" , &arr[i]);
}

//initialize max and min with first elements 
int max = arr[0] ;
int min = arr[0] ;

// find max and min 
for ( i = 1 ; i < n ; i++) {
    if(arr[i] > max )
max = arr[i];
if (arr[i] < min )
min = arr[i];
}
// diaplay results 
printf("maximum elements = %d\n" , max);
printf("minimum element = %d\n" , min );

return 0 ;


}