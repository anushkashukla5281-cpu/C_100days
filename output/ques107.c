#include <stdio.h>
int main () {
int n ;
scanf("%d" , &n) ; 

int arr[n] ;
// input array elements 
for (int i = 0 ; i < n ; i++ ) {
    scanf("%d" , &arr[i]);
}

// pervious greater element
for(int i=0; i < n ; i++) {
    int found = -1 ;
    for (int j = i-1 ; j >= 0 ; j-- ) {
        if(arr[j] > arr[i]) {
            found = arr[j] ; 
            break;
        }
    }
// print result
printf("%d" , found ) ; 
if (i < n - 1 ) printf(" , ");
// print commas except last 
}


return 0 ; 

}