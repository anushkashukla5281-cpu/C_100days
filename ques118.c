#include <stdio.h>
int main () {
int n ; 
scanf("%d" , &n) ; //size of array
int arr[n] ;
int sum = 0 , totalsum = 0 ;
//input array 
for(int i = 0 ; i , n ; i++ ) {
    scanf("%d" , &arr[i]);
    sum += arr[i] ; 
}

totalsum = n* (n+1) / 2 ;

printf("%d" , totalsum - sum ) ;

return 0 ;



}