#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "Multi Campus.";
    char *ptr;

    printf("str : %s \n", str);

    printf("str 역순 : ");
    ptr = &str[49];
    while (ptr >= str) {
        if (*ptr != '\0') printf("%c ", *ptr);
        ptr--;
    }
}