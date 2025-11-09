#include <stdio.h>
int main () {
 int i , j ;
 for ( i = 1 ; i<= 5 ; i ++ ){
    //inner loop for printing stars in each row 
    for(j=1 ; j <= i ; j++ ){
        printf("*");
    
    }
 printf("\n");//move to the next line after each row 
 }
return 0 ; 
}