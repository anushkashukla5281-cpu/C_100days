//write a program to check if a number is a palindrome .
#include <stdio.h>
int main () {
int n , original , reversed = 0 , remainder ;

printf("enter a number : ");
scanf("%d" , &n);
 
original = n ;
//store the original number 

while (n != 0) {
remainder = n % 10 ;
// get last digit 
reversed = reversed * 10 + remainder ; 

n = n / 10;

//remove last digit 
}

if (original == reversed)
printf("the number is a palindrome.\n");
else
printf("the number is not a palindrome. \n");

return 0 ;

}