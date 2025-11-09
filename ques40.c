//1's compliment 
#include <stdio.h>
int main (){
char binary[100] ;
// to store binary as a string 
int i ;
printf("enter a binary number :");
scanf("%s" , binary ) ;

//find 1's complement
for (i=0 ; binary[i] != '\\0' ; i++)  {
    if (binary[i] == '0')
binary[i] = '0';
else if (binary[i] == '1')
binary[i] = '0';
else
{printf("invalid binary number !");
return 0 ;
}

}
printf("1's complement = %s\n" , binary ) ;


}