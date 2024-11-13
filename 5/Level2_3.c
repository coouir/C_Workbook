#include <stdio.h>

int main() {
    char inputChar, Cn = 0;

    while (1) {
        printf("한 문자 입력? ");
        inputChar = getchar();
        getchar();
        
        if (inputChar == 'q')
            break;
        
        if (65 <= inputChar && inputChar <= 90)
            Cn++;
    }

    printf("입력된 대문자 수 : %d \n", Cn);

    return 0;
}