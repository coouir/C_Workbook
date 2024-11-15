#include <stdio.h>

void binaryFunc(int bin);

int main() {
    int num;

    printf("양의 정수 입력? ");
    scanf("%d", &num);

    binaryFunc(num);

    printf("\n");

    return 0;
}

void binaryFunc(int bin) {
    if (bin) {
        binaryFunc(bin/2);
        printf("%d ", bin%2);
    }
}