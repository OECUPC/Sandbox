#include <stdio.h>

int main() {
    int xs, ys, xe, ye, x, y;
    double a, e;
    printf("始点座標 xs ys => ");
    scanf("%d %d", &xs, &ys);
    printf("終点座標 xe ye => ");
    scanf("%d %d", &xe, &ye);
    a = ((double)ye - ys) / (xe - xs);
    y = ys;
    e = 0;
    for (x = xs; x <= xe; x++) {
        printf("(%d, %d)\n", x, y);
        e += a;
        if (e >= 0.5) {
            e--;
            y++;
        }
    }
    return 0;
}