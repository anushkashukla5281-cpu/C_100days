#include <stdio.h>
int main () {

int arr[100] , n , i , num , pos;

printf("enter the number of elements : ");
scanf ("%d" , &n ) ;

printf("enter %d elements : " , n ) ;
for ( i = 0 ; i < n ; i++ ) {
    scanf("%d" , &arr[i]);
}

printf("enter element to insert : ");
scanf("%d" , &num);

printf("enter position to insert (1 to %d) : " , n + 1) ;
scanf("%d" , &pos ) ;

//check valid position 
if (pos < 1 || pos > n +1 ) {
printf("invalid position ! \n");

return 0 ; 
}

for (i=0 ; i < n ; i++ ) {
    printf("%d" , arr[i]);
}
printf("\n");
return 0 ;




}