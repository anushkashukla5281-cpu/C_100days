//write a program to print the product of even numbers 1 to n .

#include <stdio.h>

int main() {
int n , i ;
long long product = 1 ;

printf("enter the number : ");
scanf("%d" , &n);

for(i=2 ; i<=n ; i += 2 ) { product *= i ; 
}

printf ("product of even number from 1 to %d = %lld\n " , n , product );



}











