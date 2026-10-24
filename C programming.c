// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
void printNo(int arr[], int n);

int main() {
int arr[] = {1, 2, 3, 4, 5, 6};
printNo(arr, 6);
    return 0;
}

void printNo( int arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d \t", arr[i]); 
    }
    
}
    