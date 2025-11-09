#include <stdio.h>
int main () {
int n , i , key , low , high , mid ;
int arr[100] ;

printf("enter number of elements : ");
scanf("%d" , &n);

printf("enter %d sorted elements : " , n );
for (i=0 ; i < n ; i++ ) {
    scanf("%d" , &arr[i]);
}

printf("enter element to search : ") ;
scanf("%d" , &key);

low = 0 ;
high = n -1 ;
while ( low <= high ) {
    mid = (low + high) / 2 ;
    if (arr[mid] == key) {
        printf("element found at position %d\n ", mid + 1 );
return 0 ;
    }
    else if (arr[mid]< key )
    low = mid + 1 ;
    else 
    high = mid - 1 ;
}
printf("element not found . \n");
return 0 ;
}