#include <stdio.h>
#include <ctype.h>

double celsiusFunc (char c, int t);

int main() {
    char celsius;
    int tmp;
    double out;

    do {
        printf("화씨이면 F, 섭씨이면 C 입력? ");
        scanf("%c%*c", &celsius);
        celsius = toupper(celsius);
    } while (celsius != 'C' && celsius != 'F');

    printf("%s 온도? ", celsius=='F'?"화씨":"섭씨");
    scanf("%d", &tmp);

    out = celsiusFunc(celsius, tmp);

    printf("\n%s를 %s로 변환: %.2lf \n", celsius=='F'?"화씨":"섭씨", celsius=='F'?"섭씨":"화씨", out);

    return 0;
}

double celsiusFunc (char c, int t) {
    if (c == 'F') 
        return (t-32)/1.8;
    return (t*1.8)+32;
}