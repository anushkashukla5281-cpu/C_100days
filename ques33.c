// write a program to check if a number is a armstrong number or not . 
 #include <stdio.h>
 #include <math.h>

 int main() {
    int num , on , rem , n = 0 ;
    float result = 0.0;

    scanf("%d" , &num);
    on = num ;

    for (on = num ; on != 0; ++n) {
        on /= 10;
    }
on = num;
while (on!= 0){
    rem = on % 10;
    result += (rem , n );
    on /= 10 ;
}
if ((int)result == num )
printf("Armstrong\n");
else
printf("not armstrong\n");
 }