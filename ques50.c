#include <stdio.h>
int main() {

int i , j , n=5 ;
for( i = 1 ; i <= n ; i++ ){
    //printing spaces
    for(j=1 ; j < i ; j++ ) {
        printf(" ");
    }
//printing stars 
for( j=1 ; j<= n-i + 1 ; j++ ) {
    printf("*");
}printf("\n");
// move to next line after each row 
}
return 0 ;

}