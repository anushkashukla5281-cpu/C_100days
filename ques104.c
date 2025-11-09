#include <stdio.h>

int main () {

int n ;
printf("enter a positive integer n : ");
scanf("%d" , &n) ;

int totalsum = n * ( n +1 ) / 2;
//sum of 1 to n 
int leftsum = 0 ;
int pivot = -1 ;

for (int x = 1 ; x <= n ; x++ ) {
    leftsum += x ; // sum from 1 to x 
    int rightsum = totalsum - leftsum + x; // sum from x to n 
    if (leftsum == rightsum ) {
        pivot = x ;
        break ; 
    }
}
printf("output : %d\n" , pivot);
return 0 ; 

}






































