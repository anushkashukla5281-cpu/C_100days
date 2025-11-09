// perfect number 
#include <stdio.h>
int main () {
int num , i , sum = 0 ;

printf("Enter a number : ");
scanf("%d" , &num );

//find all the divisiors and add them 
for(i=1 ; i < num ; i++ ) {
if (num % i == 0 ){
    sum = sum + i ;
}
}

if ( sum == num )
printf("%d is a perfect number . \n " , num );
else 
printf("%d is not a perfect number . \n" , num );

return 0 ;



}