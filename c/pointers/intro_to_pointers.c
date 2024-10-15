#include <stdio.h> 

int main() {
    int x = 10; 
    int* pointer = &x; 
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of pointer: %p\n", pointer);
    printf("Value pointer points to: %d\n", *pointer);
}