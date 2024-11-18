#include <stdio.h>

int main() {
    struct STUDENT {
        char name[20];
        int score[3];
        int sum;
        float avg;
    };
    struct STUDENT std1 = {"홍길동", 68, 89, 80};
    struct STUDENT *ptr;
    int i;

    ptr = &std1;

    for (i=0; i<3; i++)
    printf("%d", std1.sum);

    return 0;
}