#include <stdio.h>
int main(){
 
    // question - 23 write a program to calculate library fine based on late days ...
   /* int days ;
    int fine = 0;
     printf("enter number of late days - ");
     scanf("%d", &days );

     if (days <= 0 ){
printf("no fine . returned on timr or early.\n");
}
else if (days <= 5){
    fine = days * 2;
    printf("fine : %d", fine);
}
else if (days <= 10 ) {
fine = (5*2) + (days - 5) * 4;

printf("fine : %d" , fine);
}
else if (days <= 30 ){
fine = (5*2) + (5*4) + (days - 10 )*6;
printf("fine : %d" , fine);
}
else {
printf("membership cancelled \n "); 
}
return 0 ; 


}*/




// question 24 write a program to calculate electricity bill based on units consumed ....

int units ;
float bill = 0 ;

printf(" enter the total units consumed - ");
scanf("%d" , &units);
 if (units <= 100){
    bill = units * 5 ;
 }
else if (units <= 200) {
bill = (100 * 5 ) + ( units - 100 )* 7 ;
}
else if ( units <= 300 ) {
bill = (100 * 5 ) + ( 100 * 7 ) + (units - 200) * 10 ;
}
else {
bill = (100*5 )+ (100*7) + (100 * 10) + (units - 300 ) * 12 ; }

printf("electricity bill : %.2f\n" , bill);

return 0 ;

}







