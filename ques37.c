// LCM of two numbers 

#include <stdio.h>
int main () {

int num1 , num2 , max ;
 printf("enter two numbers : ");
 scanf("%d %d" , &num1 , &num2);

 // find maximum
max = (num1 > num2 )  ? num1 : num2 ;
// keep increasing until it divisble by both nu. 
while (1) {
    if (max % num1 == 0 && max % num2 == 0 ){
        printf("LCM = %d\n", max ); 
    break ;
}
max++ ;    
}
return 0 ; 

}