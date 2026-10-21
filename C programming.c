// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
void swap(int a, int b);


int main() { int x = 3, y = 5;
swap (x, y);
printf("x= %d and y is %d", x,y);

  
    return 0;
}

//call by value
void  swap(int a, int b){
int temp; 
temp = a;  //logic- temp stores b value
a = b;    //logic- b stores a value
b = temp; //logic- a stores temp value
printf("the numbers are now %d and %d \n", a,b);

    
}