#include <stdio.h>
int main () {
int n , i , temp ;
printf("enter the number of elements : ");
scanf("%d" , &n);

int arr[n] ;

printf("enter %d elements : \n" , n);
for (i = 0 ; i < n ; i++) {
    scanf("%d" , &arr[i]);
}

//reverse 
for (i=0 ; i < n / 2 ; i++ ) {
    temp = arr[i] ;
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp ;
}

printf("reversed array : \n");
for (i=0 ; i<n ; i++) {
    printf("%d" , arr[i]);
}

return 0 ;

}