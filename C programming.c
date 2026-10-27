// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
void printstring(char arr[]);

int main() {

  char firstname[] = "Darsh";
    char lastname[] = "Kulkarni";
  printstring(firstname);
  printstring(lastname);
    
    return 0;
}
void printstring( char arr[]) {
   for( int i=0; arr[i] != '\0' ; i++) {

       printf("%c", arr[i]);
   }
 printf("\n");   
}