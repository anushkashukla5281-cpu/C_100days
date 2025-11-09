#include <stdio.h>
int main () {
int i , j ; 
//outer loop for rows
for (i=1 ; i <= 5 ; i++ ){
//inner loop to print numbers in each row 
for(j=1 ; j<= i ; j++ ) {
    printf("%d" , j);
}
printf("\n");
}


return 0 ;

}