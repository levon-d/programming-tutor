#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Student {
        char course[50];
        int year;
    };

    struct Student* studentPointer = (struct Student*) malloc(sizeof(struct Student));
    // to be continued
}
