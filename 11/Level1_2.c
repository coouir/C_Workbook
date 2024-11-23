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
        ptr->sum += ptr->score[i];
    ptr->avg = ptr->sum / 3;

    // 출력
    printf("%s, %d, %d, %d, %d, %.2f \n",
    ptr->name, ptr->score[0], ptr->score[1], ptr->score[2], ptr->sum, ptr->avg);
    return 0;
}