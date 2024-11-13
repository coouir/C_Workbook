#include <stdio.h>

#define FEET 30.48
#define YARD (FEET*3)
#define INCH 2.54
#define CM 1

int main() {
    int cm, inch, feet, yard;

    printf("길이의 기본단위인 야드(yard) 입력? ");
    scanf("%d", &yard);

    printf("%d yard는 feet 로 %.2f \n", yard, (float)yard*3);
    printf("%d yard는 inch 로 %.2f \n", yard, (float)yard*3*FEET/INCH);
    printf("%d yard는 inch 로 %.2f \n", yard, (float)yard*3*FEET);
    
    return 0;
}