// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int countodd(int arr[], int n);

int main(){
    int arr[]= {5, 6, 7, 8, 9, 10};
    countodd(arr, 6);
printf ("number of odd numbers are: %d", countodd(arr, 6));
return 0;
}

int countodd(int arr[], int n) {
    int count=0;
    for( int i=0; i<n; i++) {
    if (arr[i] % 2 != 0) {
        count ++;
    }
    }

return count;
    
}