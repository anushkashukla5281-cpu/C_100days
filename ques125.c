#include <stdio.h>
int main () {
FILE *fp;
char text[100];

//open existing file in append mode 
fp = fopen("data.txt" , "a");

if (fp == NULL ) {
    printf("Error opening the file. \n");

    return 1 ; 
}

//take user input 
printf("enter the text to append : ");
fgets (text , sizeof(text) , stdin ) ;

//append the text to the file 
fprintf(fp , "%s" , text ) ; 

//close the file 
fclose(fp);

printf("file updated successfully with appended text.\n");

return 0;



}