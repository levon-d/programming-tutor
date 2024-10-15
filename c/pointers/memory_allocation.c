#include <stdio.h>
#include <stdlib.h> 

int main() {

    // dynamic integer
    int *intPointer = (int*) malloc(sizeof(int));
    *intPointer = 50; 
    printf("I just dynamically allocated integer: %d \n", *intPointer); 
    free(intPointer); 

    printf("Let's see what the value is now: %d \n", *intPointer); 

    // dynamic array

    int arraySize = 10; 
    int *arrayPointer = (int *) malloc(sizeof(int) * arraySize); 

    for (int i = 0; i<arraySize; i++) {
        arrayPointer[i] = i * 10; 
        
        // the line below is equivalent to the line above
        // *(arrayPointer + i) = i * 10;
    }

    printf("Print elements before freeing\n");
    for (int i=0; i < arraySize; i++) {
        printf("%d\n", arrayPointer[i]);
    } 

    free(arrayPointer);

    printf("Print elements after freeing\n");
    for (int i=0; i < arraySize; i++) {
        printf("%d\n", arrayPointer[i]);
    } 

} 