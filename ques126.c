#include <stdio.h>
int main () {

FILE *fp;
char filename [50];
char ch ;

//take the filename from user 
printf("enter filename: ");
scanf("%s" , filename ) ;

//try to open file in read mode 
fp = fopen (filename , "r");

//check if file exists 
if (fp == NULL)  {
    printf("error : file does not exist ! \n ");
    return 1 ;
}

//if it opens 
printf("file opened successfully .\n");
printf("file content : \n");

while ((ch = fgetc(fp)) != EOF) {
    putchar(ch);
}

fclose(fp) ; 
return 0 ; 


}