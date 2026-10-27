// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
void printstring(char arr[]);

int main() {

//  char firstname[50];
//  scanf("%s", firstname);
//  printf("your name is %s", firstname);
    
char fullname[100];
 fgets(str, 100, stdin);
 puts(str);
    

    return 0;
}
void printstring( char arr[]) {
   for( int i=0; arr[i] != '\0' ; i++) {

       printf("%c", arr[i]);
   }
 printf("\n");   
}