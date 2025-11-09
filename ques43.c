//strong number 
#include <stdio.h>
int main () {
int num , temp , digit , fact , sum = 0 ;

printf ("enter a number : ");
scanf("%d" , &num );

temp = num ; //store original number 
while (temp > 0 ) {
digit = temp % 10 ;//extract last digit 
fact = 1 ;


//find fact of each digit 
for(int i = 1 ; i <= digit ; i++){
    fact = fact * i ; 
}
sum = sum +fact ;//add factorial to sum 
temp = temp /10 ;
//remove last digit 
}

if ( sum == num ) 
printf("%d is a strong number . \n" , num ) ;
else 
printf("%d is not a strong number . \n " , num );
return 0 ;




















}