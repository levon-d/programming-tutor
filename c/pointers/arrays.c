#include <stdio.h>

int main() { 
    int arr[] = {1, 2, 3, 4, 5};

    int *arrPointer = arr; 

    printf("Printing the first element: %d\n", *arrPointer);
    printf("Printing the address of the first element: %p\n", arrPointer); 
    printf("Printing the second element: %d\n", *(arrPointer+1));

    for (int i=0; i<5; i++) {
        printf("Element %d: %d\n", i, *arrPointer);
        arrPointer ++; 
    }
}