#include <stdio.h>
int main () {
int n , i ;
printf("Enter the number of elements : ");
scanf("%d" , &n );

int arr[n]; // declare array size  n 

//read elements into the array 
printf("enter %d elements : \n" , n);
for (i=0 ; i < n ; i++ ){
    scanf("%d" , &arr[i]);
}

//print elements of an array 
printf("array elements are : \n") ;
for (i=0 ; i < n ; i++) {
    printf("%d" , arr[i]);
}

return 0 ;

}