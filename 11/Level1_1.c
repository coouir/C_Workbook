#include <stdio.h>

int main() {
    struct STUDENT {
        char name[20];
        int score[3];
        int sum;
        float avg;
    };

    struct STUDENT std1 = {"홍길동", 68, 89, 80};
    int i;

    for (i=0; i<3; i++) 
        std1.sum += std1.score[i];
    std1.avg = std1.sum / 3;

    printf("%s, %d, %d, %d, %d, %.2f \n", std1.name, std1.score[0], std1.score[1], std1.score[2], std1.sum, std1.avg);

    return 0;
}