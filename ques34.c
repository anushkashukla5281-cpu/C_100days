//prime number 
#include <stdio.h>
int main() {
int n , i ,flag = 0 ;
scanf("%d" , &n);

if ( n <= 1) {
    printf("not prime\n");
    return 0;
}
for (i=2 ; i * i <= n ; i++ ){
if ( n % i== 0) {
    flag = 1 ;
    break ; 
}
}
if (flag == 0 )
printf("prime\n");
else
printf("not prime\n");
return 0 ;


























}