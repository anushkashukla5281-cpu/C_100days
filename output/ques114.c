#include <stdio.h>
#include <string.h>
int main () {
char s[100];
scanf("%s" , s) ;

int maxLen = 0 ; 

for(int i=0 ; s[i] != '\0' ; i++ )
{int visited[256] = {0} ;
int len = 0 ; 
for (int j = i ; s[j] != '\null' ; j++ ){
    if (visited[s[j]] == 1){
        break ; 
    }
visited[s[j]] = 1 ; 
len++;
}
if (len > maxLen)
maxLen = len ;
 }

printf("%d" , maxLen);
return 0 ; 

}