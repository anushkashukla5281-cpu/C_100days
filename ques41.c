// swap 1st and last digit 
#include <stdio.h>
int main () {
int num , first , last ,  temp , count = 0 ;
printf("enter a number :");
scanf("%d" , &num );

temp = num ;
last = num % 10 ;

while (temp >= 10 ) {
    temp = temp /10 ;
    count ++ ;
}
first = temp ;
// rm=emove 1st and last and swap them 
int power = 1 ; 
for (int i = 0; i< count ; i++)
power = power *10 ;

num = num % power ;
//remove first digit 
num = num / 10 ;
//remove last digit
int swapped = last *power + num * 10 + first ;
printf("number after swapping first and last digit = %d\n" , swapped );


return 0 ;







}