//write a program to print all factors of a given number . 
#include <stdio.h>
int main() {
int num , i ;
printf("enter a number : ");
scanf("%d" , &num);

printf("factors of %d are : ", num );
// loop from 1 to the number 
i = 1 ;
while ( i <= num ) {
    // if the remainder is 0 its a factor
    if (num % i == 0 ){
        printf("%d\n1" , i );
    } 
    i++ ; //move to the next number 
}
return 0 ; 
















}