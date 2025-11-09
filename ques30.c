//reverse the given number 
#include <stdio.h>
int main () {
int n , rev = 0 ; 

printf("enter a number : ");
scanf("%d" , &n );

while (n > 0 ){
    rev = rev*10 + n % 10 ;
    // take the last digit and add it to the reverse 
    n = n / 10 ;
}
printf(" reversed digit is = %d\n " , rev);



}