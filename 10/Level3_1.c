#include <stdio.h>

int main() {
    double dNum[5], dSum = 0.0;
    double *ptr;
    int i, size;

    size = sizeof(dNum) / sizeof(double);

    ptr = dNum;
    for(i=0; i<size; i++) {
        printf("%d, 실수 입력? ", i+1);
        scanf("%lf", ptr);
        dSum += *ptr++;
    }
    printf("\n입력된 dNum 배열 데이터 \n");
    for (i=0; i<size; i++) {
        printf("%.2lf, ", dNum[i]);
    }
    printf("\ndNum 배열의 합 : %.2lf \n", dSum);

    return 0;
}