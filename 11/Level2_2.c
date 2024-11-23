#include <stdio.h>
#include <ctype.h>

struct A_MEMBER {
    char name[20];
    int age;
    char gender;
    char grade;
    char mobTel[15];
    char custAddr[100];
};

void heading();

int main() {
    struct A_MEMBER cust;

    printf("성명? ");
    gets(cust.name);

    printf("나이? ");
    scanf("%d", &cust.age);

    do {
        printf("성별? (남:m, 여:w) ");
        scanf("%c", &cust.gender);
        cust.gender = toupper(cust.gender);
    } while (cust.gender != 'M' && cust.gender != 'W');

    do {
        printf("회원등급? (A, B, C) ");
        scanf("%c", &cust.grade);
        cust.grade = toupper(cust.grade);
    } while(cust.grade != 'A' && cust.grade != 'B' && cust.grade != 'C');

    printf("휴대폰 번호? ");
    scanf("%s%*c", cust.mobTel);
    
    printf("근무지역 주소? ");
    gets(cust.custAddr);

    heading();
    printf("%s, %d, %c, %4c, %s, %s \n", cust.name, cust.age, cust.gender, cust.grade, cust.mobTel, cust.custAddr);

    return 0;
}

void heading() {
    printf("===========================\n");
}