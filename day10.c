//question 19  write a program to classify a triangle as equilateral isoceles or scalene based on its side lenghts . 

# include <stdio.h> 

int main () {


/*    float a , b, c ;
printf(" enter three sides of the triangle : ");
scanf("%f %f %f" , &a , &b , &c );
 
if ( a+b>c && a+c>b && b+c>a){
    if ( a == b && b == c)
     printf("equilateral triangle\n");
     else if ( a == b || b == c || a == c ){
     printf("isoceles \n ");}
     else {
     printf("scalene \n");}    
    } else {
printf("invalid triangle sides do not satisfy triangle inequality . \n "); */


/*question 20 - Write a program to display the day of the week based on a number  (1-7)
using switch case */
 int day ; 
 printf("enter a number (1-7): ");
 scanf("%d", &day) ;
 
switch (day) {
case 1 :
printf("sunday\n");
break ;
case 2 :
printf ("monday\n");
break;
case 3 :
printf("tuesday/n");
break;
case 4 :
printf ("wednesday/n");
break;
case 5 :
printf ("thursday/n");
break;
case 6 :
printf(" friday/n");
break;
case 7 :
printf("saturday/n");
break;
default : 
printf("invalid input ! ");
}

























}









































































}