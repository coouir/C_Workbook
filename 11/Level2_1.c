#include <stdio.h>
#include <math.h>

typedef struct point {
    int x;
    int y;
} POINT;

int main() {
    double distance;
    POINT start;
    POINT end;

    printf("시작점의 좌표, x1, y1? ");
    scanf("%d %d", &start.x, &start.y);

    printf("끝점 좌표, x2, y2? ");
    scanf("%d %d", &end.x, &end.y);

    distance = sqrt((double) ((end.x-start.x)*(end.x-start.x) + (end.y-start.y)*(end.y-start.y)));

    printf("두 점 사이의 거리 : %lf \n", distance);

    return 0;
}