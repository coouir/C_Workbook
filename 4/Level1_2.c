#include <stdio.h>

int main() {
    int ounce;

    printf("무게의 단위인 온스입력? ");
    scanf("%d", &ounce);

    printf("%d 온스는 그램으로 %.2f gm \n", ounce, ounce*(28.349523));
    printf("%d 온스는 리터로 %.2f L \n", ounce, 28.349523/1000 * ounce);
}