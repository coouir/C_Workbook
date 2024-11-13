#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {
    int true = 1;
    int false = 0;

    printf("TRUE: %d, FALSE: %d \n", TRUE, FALSE);
    printf("true: %d, false: %d \n", true, false);
    true = 2;
    false = 3;
    printf("true: %d, false: %d \n", true, false);
}