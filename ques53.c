#include <stdio.h>
int main () {
int i , j ;
int n = 5 ;

// upper part of diamond 
for (i = 1 ; i <= n ; i += 2 ) {
for ( j = 1 ; j <= i ; j++ ) {
    printf("*") ;
}
printf("\n");
}

//lower part 
for ( i = n-2 ; i >= 1 ; i-=2 ) {
for ( j = 1 ; j <= i ; j++){
    printf("*");
}
printf("\n");
}
return 0 ;


}