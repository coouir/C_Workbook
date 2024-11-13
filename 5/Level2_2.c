#include <stdio.h>

int main() {
    int Num, i, oddSum = 0, evenSum = 0;

    printf("정수 입력? ");
    scanf("%d", &Num);

    for (i=1; i<=Num; i++) {
        if (i%2 == 1)
            oddSum += i;
        else
            evenSum += i;
    }

    printf("1 부터 %d 까지 홀수의 합: %d \n", Num, oddSum);
    printf("1 부터 %d 까지 짝수의 합: %d \n", Num, evenSum);
}