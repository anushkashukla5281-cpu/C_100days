// write a program to take a input and print its equivalent binary representation. 

#include <stdio.h>
int main () {
int n , binary[32] , i = 0 ;//array to store binary digits 

printf("enter a number ");
scanf("%d" , &n );
//special case : if the no. is 0

if (n==0) {
    printf("binary : 0\n");
    return 0 ;
}

// store remainders 
while (n > 0){
binary[i] = n % 2 ;
// get remainders (0 or 1  )
n = n / 2 ;
//divide number by 2 
i++ ;

}
// print binary digits in reverse order 
printf("binary : ");
for (int j = i - 1 ; j >= 0 ; j--){
    printf("%d" , binary[j]);
}
printf("\n");

return 0 ;


}











