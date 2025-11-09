/*15- write a program to input a character and check whether it is an uppercase alphabet , lowercase alphabet , digit or a specialcharacter*/
 #include <stdio.h>
 #include <ctype.h>

 int main (){
/*char ch ;
printf("enter a chracter : ");
scanf("%c", &ch );

if (isupper((ch))) {
printf("it is an uppercase character alphabet /n");
}
else if (islower(ch)){
    printf("it is a lowercase alphabet /n");
}
else if (isdigit(ch)) {
    printf("it is a digit. \n");
}
else {
    printf("it is a special chracter .\n");
}*/


 //write a program to input three numbers and find the largest among them using if-else


int a,b,c;
 printf("enter three numbers - ");
 scanf("%d %d %d", &a ,&b, &c);

 if (a>=b && a>=c)
{
    printf("%d is the greatest number /n", a);
}
else if (b>=a && b>=c){
    printf("%d is the greatest number /n", b);
}
else  {
    printf("%d is the greatest number /n " , c);
}

 }


