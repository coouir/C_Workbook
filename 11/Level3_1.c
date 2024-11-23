#include <stdio.h>

#define STU_SZ 5

struct STUDENT {
    char name[20];
    char subject[5][30];
    int hakjum_unit[5];
    double jumsu[5];
    double greade;
};

void heading();

int main() {
    struct STUDENT stu = {
        "까꿍이", "C/C++", "JAVA", "Oracle", "전산개론", "교양1",
        3, 3, 2, 4, 3, 
        4.5, 3.0, 3.5, 4.0, 3.5, 0.0
    };
    int i, h_unit_tot = 0;
    double tmp = 0;
    
    for (i=0; i<5; i++) {
        h_unit_tot += stu.hakjum_unit[i]*stu.jumsu[i];
        tmp += stu.hakjum_unit[i];
    }
    stu.greade = h_unit_tot/tmp;

    heading();

    printf("%5s, ", stu.name);
    for (i=0; i<5; i++)
        printf("%6s:%d:%.1lf, ", stu.subject[i], stu.hakjum_unit[i], stu.jumsu[i]);
    printf("=> %.2lf", stu.greade);

    return 0;
}

void heading() {
    printf("===============\n");
}