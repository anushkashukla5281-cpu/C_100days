#include <stdio.h>
int main () {

char str[100] ;
int i ;

printf("enter a string : ");
gets (str) ; //reads the whole line 

printf("\n characters in the string : \n ") ;
for ( i=0 ; str[i] != '\0' ; i++ ){
    printf("%c\n" , str[i]);
}

return 0 ;


}