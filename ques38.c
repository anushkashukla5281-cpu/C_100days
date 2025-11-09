// sum of digits of a number 
#include <stdio.h>
int main () {


int num , sum = 0 , remainder ;

// input number 
printf("enter a number : ");
scanf("%d" , &num );

// extract and add digits 
while (num != 0) {
remainder = num % 10 ;
//get the last digit 
sum = sum + remainder; 
//add it to the sum 
num = num / 10 ; 
// remove the last digit 
}
//display the result 
printf("sum of digits = %d\n" , sum);

return 0 ; 
























}