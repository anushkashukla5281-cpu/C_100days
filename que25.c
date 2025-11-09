#include <stdio.h> 
int main (){

int a , b , result ;
char op ;
printf("enter two numbers and an operator : ");
scanf(" %d %d %c " , &a , &b , &op );
switch (op) {
case '+' :
result = a + b;
printf("%d\n" , result);
break ; 
case '-' :
result = a-b ;
printf("%d\n" , result);
break;
case '*':
result = a * b;
printf("%d\n" , result);
break;
case '/' :
if (b != 0 ) {
    result = a / b ;
printf("%d\n" , result);
break;
} 
else {
printf("error - division by zero\n");
}
break;
 case '%' :
 if (b != 0) {
result = a%b;
printf("%d\n", result );
 }else{
    printf("error - modulo by zero\n");

 }
break;
default : printf ("invalid operator");

 }
return 0 ;













}











}