#include <stdio.h>
int main () {

char str[100] ;
int i , count = 0 ;

printf("enter a string : ");
gets(str) ;
for ( i=0 ; str[i] != '\0' ; i++ ){
    count++ ; 
}

printf("number of characters in the string : %d\n" , count );
return 0 ; }