// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    int fact=1; int n;
    printf("please enter your number");
    scanf("%d", & n);
for( int i=1;i<=n;i++)
    
    
    { fact=fact*i; }
      printf("%d \n", fact);
        
    
    return 0;
}