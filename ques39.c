  // product of odd digits
  #include <stdio.h>
  int main () {

int num , digit , product = 1 ;
printf("enter a number : ");
scanf("%d" , &num );

while ( num > 0 ) {
digit = num % 10 ;
// get the last digit 
if (digit % 2 != 0 )
// check if its odd
product = product * digit ; //multiply it 
num = num / 10 ;
//remove last digit 
}

printf("product of odd digits = %d\n" , product );

return 0 ; 


  }