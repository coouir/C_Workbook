#include <stdio.h>

void func1(char *tmp);

int main() {
    char msg[30] = "C Programming.";

    func1(msg);
    printf("msg : %s \n", msg);

    return 0;
}

void func1(char *tmp) {
    while(*tmp) {
        if (*tmp >= 65 && *tmp <= 90) {
            *tmp += 32;
        }
        tmp++;
    }
}