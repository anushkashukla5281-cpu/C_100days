#include <stdio.h>

int main () {
char str[100] ;
int i , spaces = 0 , digits = 0 , special = 0 ; 
printf("enter a string : ");
gets(str) ;

for(i=0 ; str[i] != '\0' ; i++){
    if (str[i] == ' ')
spaces ++ ; 

// count spaces 
else if (str[i] >= '0' && str[i] <= '9')
digits++;

// count digits 

else if (!((str[i] >= 'a' && str[i] <= 'z') ||
(str[i] >= 'A' && str[i] <= 'Z')))
special ++;
// count special characters 
}

printf("spaces : %d\n" , spaces );
printf("digits : %d\n" , digits );
printf("special characters : %d\n" , special ) ;

return 0 ;

}