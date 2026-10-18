// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
int i = 5;
int *ptr = &i; 
int **pptr = &ptr;
printf("%d", **pptr);
    

    
    return 0;
}