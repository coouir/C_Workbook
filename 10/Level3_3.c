#include <stdio.h>

int Func1(int tmp[]);

int main() {
    int num[5] = {100, 200, 300, 400, 500}, i;
    Func1(num);

    return 0;
}

int Func1(int tmp[]) {
    int i;

    printf("tmp sizeof : %d \n", (int)sizeof(tmp));
    for (i=0; i<5; i++)
        printf("%d, ", *(tmp+i));
    printf("\n");
}

