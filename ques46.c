#include <stdio.h>
int main () {

int i , j ;
// outer loop for rows 
for ( i=1 ; i <= 5 ; i++ ){
// inner loop for columns 
for (j=1 ; j<= 5 ; j++ ){
    printf("*") ;

}
printf("\n") ; //move to the next line after each row

}
return 0 ;
}