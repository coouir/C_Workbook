#include <stdio.h>

int main() {
    int Num, tmp, base;
    
    printf("정수를 입력하시오: ");
    scanf("%d", &Num);

    base = 1000;
    
    while (Num) {
        tmp = Num / base;
        printf("%5d 단위 값 : %d \n", base, tmp);

        Num = Num % base;
        base = base/10;
    }
}