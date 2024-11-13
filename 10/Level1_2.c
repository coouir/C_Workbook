#include <stdio.h>

int main() {
    char msg[100] = "Hello World !!!";
    char *ptr;

    printf("msg : %s \n", msg);

    ptr = msg;
    while (*ptr) {
        printf("%c ", *ptr++);
    }
}