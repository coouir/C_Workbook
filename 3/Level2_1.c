#include <stdio.h>

int main() {
    // 변수 선언
    char gender;
    int age;
    float height;

    // 데이터 입력
    printf("성별(남:m, 여:w)? ");
    scanf("%c", &gender);

    printf("나이? ");
    scanf("%d", &age);

    printf("키(신장)? ");
    scanf("%f", &height);

    printf("성별: %c, 나이: %d, 키(신장): %f \n", gender, age, height);

    return 0;
}