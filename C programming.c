// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include<string.h>
void printstring(char arr[]);
int countLength(char arr[]);

int main() {
    char oldStr[100] = "HAA";
    char newStr[] = "HAA";
   printf("%d", strcmp(newStr, oldStr));
    //  char firstname[50];
//  scanf("%s", firstname);
//  printf("your name is %s", firstname);
    
// char fullname[100];
//  fgets(str, 100, stdin);
//  puts(str);

    return 0;
}

int countLength(char arr[]) {
     int count = 0;
     for (int i=0; arr[i]!='\0'; i++) {
        count ++;
     }

return count-1;

}

void printstring( char arr[]) {
   for( int i=0; arr[i] != '\0' ; i++) {

       printf("%c", arr[i]);
   }
 printf("\n");   
}