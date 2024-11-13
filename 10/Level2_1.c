#include <stdio.h>

int main() {
    char str[50] = "Multi Campus.", tmp[50];
    char *from, *to;

    from = str;
    to = tmp;

    while (*from) {
        *to = *from++;
        to++;
    }
    *to = '\0';
    printf("str: %s, tmp: %s \n", str, tmp);

    return 0;
}
